This folder contains the TinyCC (TCC) compiler, which is used by the WARP project. This compiler is used both for compiling WARP from sources and as a Just-In-Time (JIT) compiler to execute C-code in the Warband WSE2 game at runtime.

create_def.bat:
This batch file is used to create definition files (def-files) for DLLs. It checks if a file is passed to the batch file and if the file has a .dll extension. If both conditions are met, it creates a definition file for the DLL using the TCC compiler's -impdef option.