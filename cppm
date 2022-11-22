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

2. C Program to Add Two Integers.

// C program to add two numbers
#include<stdio.h>
  
int main()
{
    int A, B, sum = 0;
      
    // Ask user to enter the two numbers
    printf("Enter two numbers A and B : \n");
      
    // Read two numbers from the user || A = 2, B = 3
    scanf("%d%d", &A, &B);
      
    // Calclulate the addition of A and B
    // using'+'operator
    sum = A + B;
      
    // Print the sum
    printf("Sum of A and B is: %d", sum);
      
    return 0;
}

3. C Program to Find ASCII Value of a Character.
In this C program, the User is asked to enter any character, and this program will find and display the ASCII value of that character.

#include <stdio.h>

int main()
{
  char ch;
  
  printf("\n Please Enter any character \n");
  scanf("%c",&ch);
  
  printf("\n The ASCII value = %d",ch);
  return 0;
}

Output:
Please Enter any character a

 The ASCII value = 97

4.Write a program to calculate area of a circle.

#include<stdio.h>
int main()
{
  float radius, area, circumference;

  printf("\n Please Enter the radius of a circle\n");
  scanf("%f",&radius);

  area = PI*radius*radius; 
  circumference = 2* PI*radius;

  printf("\n Area Of a Circle = %.2f\n", area);
  printf("\n Circumference Of a Circle = %.2f\n", circumference);

  return 0;
}
