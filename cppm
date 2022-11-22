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


5. Write a c program to swap two numbers with    using third variable.

#include <stdio.h>
int main(void)
{
// Variable declaration
int a, b, temp;    
printf("Enter two numbers a and b ");
scanf("%d %d", &a, &b);
// Swap logic
temp = a;
a = b;
b = temp;
printf("\n After swapping \na = %d\nb = %d\n", a, b);
return 0;
}

6.C Program to Check Whether a Number is Even or Odd.
// C program for the above approach
#include <stdio.h>

// Function to check if a
// number is even or odd
void checkEvenOdd(int N)
{
	// Find remainder
	int r = N % 2;

	// Condition for even
	if (r == 0) {
		printf("Even");
	}

	// Otherwise
	else {
		printf("Odd");
	}
}

// Driver Code
int main()
{
	// Given number N
	int N = 101;

	// Function Call
	checkEvenOdd(N);

	return 0;
}

7.C Program to Check Whether a Number is Positive or Negative.

#include <stdio.h>

int main()
{
	int A;

	printf("Enter the number A: ");
	scanf("%d", &A);

	if (A > 0)
		printf("%d is positive.", A);
	else if (A < 0)
		printf("%d is negative.", A);
	else if (A == 0)
		printf("%d is zero.", A);

	return 0;
}


8.C Program to Check Whether a Character is an Alphabet or not.

#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}

Output:
Enter a character: *
* is not an alphabet


9.C Program to Find the Largest Number Among Three Numbers.

#include <stdio.h>

int main()
{
	int A, B, C;

	printf("Enter the numbers A, B and C: ");
	scanf("%d %d %d", &A, &B, &C);

	if (A >= B && A >= C)
		printf("%d is the largest number.", A);

	if (B >= A && B >= C)
		printf("%d is the largest number.", B);

	if (C >= A && C >= B)
		printf("%d is the largest number.", C);

	return 0;
}

Output:
Enter the numbers A, B and C: 2 8 1 
8 is the largest number.


10.C Program to Make a Simple Calculator Using switch...case
This program takes an arithmetic operator +, -, *, / and two operands from the
user. Then, it performs the calculation on the two operands depending upon
the operator entered by the user.

#include <stdio.h>

int main() {

  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}

Output

Enter an operator (+, -, *,): *
Enter two operands: 1.5
4.5
1.5 * 4.5 = 6.8



11.C Program to find sum of 1 to N number.

#include <stdio.h>

int main()
{
    int i, n, sum=0;

    /* Input upper limit from user */
    printf("Enter upper limit: ");
    scanf("%d", &n);

    /* Find sum of all numbers */
    for(i=1; i<=n; i++)
    {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}

Output:

Enter upper limit: 10
Sum of first 10 natural numbers = 55



12.Write a c program to print factorial of a number.

// C program to find factorial
// of given number
#include <stdio.h>

// Function to find factorial
// of given number
unsigned int factorial(unsigned int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

// Driver code
int main()
{
	int num = 5;
	printf("Factorial of %d is %d",
		num, factorial(num));
	return 0;
}

Output:
Factorial of 5 is 120


13.Write a c program to print sum of digits.

#include <stdio.h>

int main()
{
  int Number, Reminder, Sum=0;

  printf("\n Please Enter any number\n");
  scanf("%d", &Number);

  while(Number > 0)
  {
     Reminder = Number % 10;
     Sum = Sum+ Reminder;
     Number = Number / 10;
  }

  printf("\n Sum of the digits of Given Number = %d", Sum);

  return 0;
}

14.C Program to Check Whether a Number is Palindrome or Not.


#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}

Output

Enter an integer: 1001
1001 is a palindrome.


15.C Program to read and display elements from array.


int main()
{
    int a[1000],i,n;  
 
     printf("Enter size of array: ");
    scanf("%d",&n);
 
     printf("Enter %d elements in the array : ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
 
    printf("\nElements in array are: ");
    for(i=0;i<n;i++)
 
    {
        printf("%d  ", a[i]);
    }
 
    return 0;
}

Output:
Enter size of array: 5
Enter 5 elements in the array: 1
2
3
4
5
 
Elements in array are: 1  2  3  4  5


16.Program to search an element from an array of size 10.

#include <stdio.h>

#define MAX_SIZE 100  // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size, i, toSearch, found;

    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d", &size);

    /* Input elements of array */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);

    /* Assume that element does not exists in array */
    found = 0; 
    
    for(i=0; i<size; i++)
    {
        /* 
         * If element is found in array then raise found flag
         * and terminate from loop.
         */
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    /*
     * If element is not found in array
     */
    if(found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }

    return 0;
}

Output:
Enter size of array: 10
Enter elements in array: 10 12 20 25 13 10 9 40 60 5

Enter element to search: 25

25 is found at position 4


17.C Program to find Sum of All Array elements.


#include<stdio.h>

int main()
{
 int Size, i, a[10];
 int Addition = 0;
 
 // You have specify the array size 
 printf("\n Please Enter the Size\n");
 scanf("%d", &Size);
 
 printf("\nPlease Enter the Elements\n");
 //Start at 0, it will save user enter values into array a 
 for(i = 0; i < Size; i++)
  {
      scanf("%d", &a[i]);
  }
 // Loop Over, and add every item to Addition 
 for(i = 0; i < Size; i ++)
 {
      Addition = Addition + a[i]; 
 }
  
 printf("Sum = %d ", Addition);
 return 0;
}

The sum of array items using a for loop output

 Please Enter the Size 4

Please Enter the Elements
10
20
30
40
Sum = 100 

18.C Program to find Sum of All even elements from 1 dim Array of size 10 elements.
