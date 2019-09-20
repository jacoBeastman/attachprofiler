Attaches the New Relic .NET profiler to a running process. Proof of concept only.

Normally .NET profilers must be attached when the process starts up based on environment variables telling the .NET CLR to enable profiling and where to look for the profiler. With .NET 4.0, the CLR now supports REJIT compiling and attaching to a running process:

https://docs.microsoft.com/en-us/previous-versions/dotnet/netframework-4.0/dd997942(v=vs.100)?redirectedfrom=MSDN

This is a proof of concept that attaches the New Relic .NET Agent to all running IIS processes. The profiler successfully attaches but the agent currently does not support this feature and does not begin monitoring a process when attached this way.
