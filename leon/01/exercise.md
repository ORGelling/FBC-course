Exercise 1.
Basic exercise
Purpose of this exercise: construct a famous program illustrating that you can use the compiler.

This is an exercise to get you `up and running'. Its main purpose is to show (also to yourself) that you have an operational compiler and that you're able to write the most famous of all C/C++ programs:

- [x] Construct a program printing the text


    Hello World


to the screen. The line must properly be terminated (use \n).

- [x] Name your source file


    hello.cc


- [ ] Compile and link the program.

- [ ] Construct the separate object file hello.o, and the executable program hello.exe (Windows) or hello (Unix). Provide short, informative descriptions of what these two files are.
  - The object file can be produced with `-c`
  - The executable program can be produced with `-o hello`

Submit:

- [ ]    The listing (of course, see the introductory text above this exercise) of your program;
    
- [ ]    The commands you entered to compile and link the program;

```
g++-15 -c hello.c // compiles an object file named `hello.o`
g++-15 -o hello hello.c // builds an executable file named `hello`
```
    
- [ ]    The short descriptions of object file and executable;

The object file is machine code produced from the source code, and contain (unresolved) external references.

The executable is the final program, which is obtained by linking all object files with libraries that have implemented the external references.  
    
- [ ]    The program's output;

Hello World

    
- [ ]    The size in bytes (not kBytes!) of:
        the source file;
        66 bytes
        the object file; 
        1840 bytes
        the executable program (strip it first, using the -s switch when creating the executable);
        33928 bytes
        the file iostream
        1511 bytes 
         <!-- /Library/Developer/CommandLineTools/SDKs/MacOSX14.2.sdk/usr/include/c++/v1/ -->


Note that the size of the files depends on the used operating system and compiler.

For the file iostream it's important to find its location. Even the way to find files like iostream depends on operating system and compiler.

On my Linux system the standard C headers are found in directory /usr/include, while the standard C++ headers are below /usr/include/c++. In there the file iostream is found.

Alternatively, the locate program can be used: the command


    locate iostream


will tell you where the iostream files are. I count about 200 hits.... However,


    locate iostream | grep '\biostream$'


reduces this to four, among which /usr/include/c++/4.1.3/iostream: bingo!

Under Windows


    Find -> Files or Folders


allows you to find a certain file. Alternatively (and preferably), use


    find / -name iostream


when you're using Linux.
