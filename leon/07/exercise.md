# Exercise 7.
Advanced exercise
Purpose of this exercise: learn to use command-line arguments

Write a program whose main function can handle command line arguments. If no arguments are passed to the program it writes hello world to the standard output stream (i.e., cout); if one argument is specified it writes hello xxx, where xxx is the first command line argument that's provided when the program is run; if more than one arguments are specified then the 1st argument specifies the index of the argument to display. E.g., a.out 3 arg2 arg3 arg4 writes hello arg3.

Hints:

    you only need one expression statement, i.e., one statement ending in a semicolon.
    Use #include <string>, using namespace std; just above your int main function definition, and then stoul(argv[1]) to obtain the value that's specified by argv[1]. 

Submit your program and also describe how you can call the program so that it displays the 1st argument other than by specifying a single argument.

Caveat: note that you cannot use facilities we haven't introduced yet, unless the exercise explicitly allows you to do so. At this point we haven't covered flow control statements, so you cannot use if-statements.



