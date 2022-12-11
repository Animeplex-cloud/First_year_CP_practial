#include<stdio.h> //include header files
#include<conio.h>
void main() //function main() starts here
{
int i, square, cube; //variable declaration
clrscr(); //clear output screen
for(i=0;i<=10;i++) // for statement to iterate for i=0 to 10
{
printf("Number is %d \t", i); //display number
square = i*i ; //calculate square
printf (" square of number is %d\t", square); //display square
cube = square* i; ////calculate cube
printf("cube of no is %d \n", cube); //display cube
} //end of for loop
getch(); //read inputted character
} //end of main()