#include<stdio.h> //include header files
#include<conio.h>
void main() // function main() starts here
{
int num; //declare variable
clrscr(); //clears output screen
printf(“Enter the number:”); //display message
scanf(“%d”,&num); //read an input from user.
if(num%2==0) //check even test
{
printf(“%d is Even”,num); //if test is true, display this
} //end of if
else
{
printf(“%d is ODD”,num); //if test is false, display this
} //end of else
getch(); //read inputted character
} //end of main()