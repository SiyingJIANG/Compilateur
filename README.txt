			COMP project
Content:
1. front-end
2. back-end	
3. Build
4. Antlr4-cpp-runtime library
5. How to create antlr4-cpp-runtime library from antlr4-cpp-runtime-source
6. Usage

1. front-end:
Was implemented:
	demanded grammar and features
	+ solved the scope of multiple level nested scopes

Was not implemented:
	- static analysis for array variables

2. back-end:
Was  implemented
	variable declaration with initialization
	expressions : binary(+ - / * % < > <= >= ==), constants, variables 
	assignment (+ assignment as rvalue in an expression)  ex: a=b=2;
	if statement
	while statement
	function calls (6+ parameters)
	multiple returns
	arrays declared with constant size
	array subscript as expression  ex: a[2*c+12]

Was not implemented:
	correct type management (for now only quadwords)
	break,continue

3. Build:
in : project/
	create folder : cmake-build-debug
in : project/cmake-build-debug
	execute command: cmake ..
in : project/cmake-build-debug
	execute command: make

4. Antlr4-cpp-runtime
For Windows :
	put ___antlr4-cpp-4.7.1.dll in project/antlr/lib/  (the .dll file can have various prefixes)

	put ___antlr4-cpp-4.7.1.dll in project/cmake-build-debug near the project.exe so it has access to the .dll

	change the project/CMakeList
		modify command target_link_libraries : rewrite the antlr library name to ___antlr4-runtime.dll

For Linux :
	put libantlr4-runtime.a in project/antlr/lib/
	change the project/CMakeList
		modify command target_link_libraries : rewrite the antlr library name to libantlr4-runtime.a

5. Antlr4-cpp-runtime-4.7.1-source
	read the Antlr4-cpp-runtime-4.7.1-source/README
	
	in Antlr4-cpp-runtime-4.7.1-source/run/usr you have local/ which you should copy to project/antlr/
	
6. Usage:
Execute the compiled program, 
enter the name of the file you want to compile (put it in the same directory of the executable),
the output assembly code will be placed in the same directory, the name of file is "output.s".


