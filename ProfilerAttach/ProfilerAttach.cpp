// ProfilerAttach.cpp
//
// Gets running app pools and attaches the New Relic .NET Profiler

#include "stdafx.h"
#include <Windows.h>
#include <metahost.h>
//#include "corprof_i.c"
//#include "corprof_p.c"
//#include "CorProf_H.h"
#include <TlHelp32.h>

#pragma comment(lib, "mscoree.lib")



//Gets the pids of w3wp.exe 
int main()
{

	//Target process name to attach
	WCHAR targetproc[] = L"w3wp.exe";
	LPCWSTR pwzVersion = L"v4.0.30319";
	LPCWSTR profilerpath = L"C:\\Program Files (x86)\\New Relic\\.NET Agent\\NewRelic.Profiler.dll";
	int foo;

	//TH32CS_SNAPPROCESS 0x00000002 Includes all processes in the system in the snapshot.
	HANDLE handle = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

	PROCESSENTRY32 proc;
	proc.dwSize = sizeof(PROCESSENTRY32);

	//{CLSID_New Relic .NET Profiler}
	CLSID clsid;
	wchar_t* guid = L"{71DA0A04-7777-4EC6-9643-7D28B46A8A41}";
	HRESULT result2 = CLSIDFromString(guid, &clsid);

	
	//LPVOID pvClientData = (LPVOID)&profConfig;
	//DWORD cbClientData = sizeof(profConfig);

	
	//First process in snapshot
	if (Process32First(handle, &proc))
	{
		if (wcscmp(proc.szExeFile, targetproc) == 0)
		{

			ICLRMetaHost *pMetaHost = NULL;
			HRESULT hr = CLRCreateInstance(CLSID_CLRMetaHost,
				IID_ICLRMetaHost, (LPVOID*)&pMetaHost);

			IEnumUnknown *enumruntimes = NULL;
			ICLRRuntimeInfo *runtimeinfo = NULL;
			IUnknown * pUnk = NULL;
			ICLRProfiling *profiling;

			//The w3wp.exe handle
			HANDLE prochandle = OpenProcess(PROCESS_ALL_ACCESS, TRUE, proc.th32ProcessID);

			hr = pMetaHost->EnumerateLoadedRuntimes(prochandle, &enumruntimes);
			if (FAILED(hr))
			{
				std::cout << proc.th32ProcessID;
				std::cout << hr;
			}


			while (enumruntimes->Next(1, &pUnk, NULL) == S_OK)
			{
				hr = pUnk->QueryInterface(IID_ICLRRuntimeInfo, (LPVOID *)&runtimeinfo);
				if (FAILED(hr))
				{
					std::cout << proc.th32ProcessID;
					std::cout << hr;
				}

				hr = runtimeinfo->GetInterface(CLSID_CLRProfiling, IID_ICLRProfiling, (LPVOID *)&profiling);
				if (FAILED(hr))
				{
					std::cout << proc.th32ProcessID;
					std::cout << hr;
				}


				hr = profiling->AttachProfiler(proc.th32ProcessID, 4000, &clsid, profilerpath, NULL, 0);

				std::cout << proc.th32ProcessID;
				std::cout << hr;

			}

		}
	}

	//Get the rest of the processes
	while (Process32Next(handle, &proc))
	{
		if (wcscmp(proc.szExeFile, targetproc) == 0)
		{
			ICLRMetaHost *pMetaHost = NULL;
			HRESULT hr = CLRCreateInstance(CLSID_CLRMetaHost,
				IID_ICLRMetaHost, (LPVOID*)&pMetaHost);

			IEnumUnknown *enumruntimes = NULL;
			ICLRRuntimeInfo *runtimeinfo = NULL;
			IUnknown * pUnk = NULL;
			ICLRProfiling *profiling;

			//The w3wp.exe handle
			HANDLE prochandle = OpenProcess(PROCESS_ALL_ACCESS, TRUE, proc.th32ProcessID);


			//HRESULT_FROM_WIN32(ERROR_PARTIAL_COPY) : Only part of a ReadProcessMemory or WriteProcessMemory request was completed.
			//error due to architecture between this process and the target process
			hr = pMetaHost->EnumerateLoadedRuntimes(prochandle, &enumruntimes);
			if (FAILED(hr))
			{
				std::cout << proc.th32ProcessID;
				std::cout << hr;
			}


			while (enumruntimes->Next(1, &pUnk, NULL) == S_OK)
			{
				hr = pUnk->QueryInterface(IID_ICLRRuntimeInfo, (LPVOID *)&runtimeinfo);
				if (FAILED(hr))
				{
					std::cout << proc.th32ProcessID;
					std::cout << hr;
				}

				hr = runtimeinfo->GetInterface(CLSID_CLRProfiling, IID_ICLRProfiling, (LPVOID *)&profiling);
				if (FAILED(hr))
				{
					std::cout << proc.th32ProcessID;
					std::cout << hr;
				}

				
				//HRESULT 0x8013136a CORPROF_E_UNRECOGNIZED_PIPE_MSG_FORMAT
				//This occurs when profiler is already attached
				//https://github.com/dotnet/coreclr/blob/master/src/vm/profattachserver.cpp

				//HRESULT: 0x800700c1 
				//Loading profiler failed during CoCreateInstance.  Profiler CLSID: '{71DA0A04-7777-4EC6-9643-7D28B46A8A41}'
				//Mismatched NewRelic.Profiler.dll for architecture
				//
				//HRESULT should be returned by Profiler when successfully attached, lets try giving this an empty hresult:
				hr = profiling->AttachProfiler(proc.th32ProcessID, 4000, &clsid, profilerpath, NULL, 0);

				std::cout << proc.th32ProcessID;
				std::cout << hr;

			}
		}
	}

	//lazy pause to read output
	std::cin >> foo;

}

