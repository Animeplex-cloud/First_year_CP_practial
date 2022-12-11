#include<stdio.h> //include header files
# include<conio.h>
void main() // function main() started
{
void swap(int *,int *); //function declaration
int a=10, b=20; //variable declaration
clrscr(); //clears output screen
printf("Before the function calling\n"); //display message
printf("Value of a= %d\t", a); // print value of a
printf("Value of b= %d\n", b); // print value of b
swap(&a,&b); // function call to swap function on addresses
printf(" after the function calling\n"); //display message
printf("Value of a= %d\t", a); // print value of a
printf("Value of b= %d\n", b); // print value of b
getch();//read character
} //end of main()
void swap(int *x, int *y) //function definition starts here
{
int temp; //variable declaration
temp = *x; // values are swapped using variable temp
*x = *y;
*y = temp;
printf("during the function calling\n"); //display message
printf("Value of a= %d\t", (*x)); // print value of a
printf("Value of b= %d\n", (*y)); // print value of b
}