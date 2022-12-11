#include<stdio.h> //include header files
#include<conio.h>
void main() //function main() started
{
int f1=0,f2=1,f3,n,t=1; //variable declaration
clrscr(); //clears output screen
printf(“Enter range upto which you want to print Fibonacci series:\n”); //display message
scanf(“%d”,&n); //read value of range from user
printf(“%d\t%d”,f1,f2); // print value of f1 and f2.
while(t<=n) //while loop started
{
f3=f1+f2; //add f1 and f2 in f3
printf(“\t%d”.f3); // print value of f3
f1=f2; //assign f1,a value of f2
f2=f3; //assign f2,a value of f3
t++; //increment counter
} //end of while loop
getch(); //read inputted character
} //end of main()