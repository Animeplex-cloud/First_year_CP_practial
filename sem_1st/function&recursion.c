#include<stdio.h> //include header files
#include<conio.h>
void main() // function main() started
{
int fact(int); //function declaration
int num; //variable declaration
clrscr(); //clears output screen
printf("Enter any number:\n"); //display message
scanf("%d",&num); //read number
printf("Factorial of number is:%d",fact(num)); //fact() function is called and value is printed
getch(); //read character
} //end of main()
int fact(int n) //function definition
{
int f; //variable declaration
if(n==1) //if condition(breaking condition) is checked ,if true
return 1;
else // if condition is false
f=n*fact(n-1); // fact() is called recursively
return f; //return final calculated factorial
} //end of function