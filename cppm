CPPM FOR FYBCA SEM-1

Warm up Programs

1. Write a program to print any single message on screen.

A Function is a re-usable block of code wriiten for specific task. Initially the control is passed to the main function, all other user defined functions should call from the main function itself. 

#include<stdio.h>
void PrintMessage()
{
    printf("This is user defined function");
}
void main()
{
    printf("This is main Function! \n");
    PrintMessage();
}
 

Above code has following elements:

#include<>            - A pre processor Directive

void                      - Return type (Function does not return any value)

PrintMessage()       - User Defined function (Identifier can be any name)

printf()                  - Used to print a message in standard output.

 

Here PrintMessage() is a called function and PrintMessage(); is a calling function.
OUTPUT: 

This is main Function!
This is user defined function
 

First the control could passed to main() function and then we are using a calling function to goto another user defined function. Like this, we can call many functions many times. 
