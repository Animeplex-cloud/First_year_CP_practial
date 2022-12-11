#include<stdio.h> //include header files
#include<conio.h>
void main() // function main() starts here
{
int ch; //variable declaration
clrscr(); //clears output screen
printf(“Enter Your Code:\n”); //display message
scanf(“%d”,&ch); //read choice value from user
printf(“Your Code is :%d\n”,ch); //display choice.
switch(ch) //switch statement started
{
case1:printf(“ WELCOME TO COMPUTER SCIENCE AND ENGG.DEPARTMENT ”);
//display message for choice 1
break; //to break control
case 2:printf(“ WELCOME TO MECHANICAL ENGG.DEPARTMENT ”);
//display message for choice 2
break; //to break control
case 3:printf(“ WELCOME TO ELECTRONICS AND TELECOMMUNICATION ENGG.DEPARTMENT ”);
//display message for choice 3
break; //to break control
case 4:printf(“ WELCOME TO CIVIL ENGG.DEPARTMENT ”);
//display message for choice 4
break; //to break control
case 5:printf(“ WELCOME TO ELECTRICAL ENGG.DEPARTMENT ”);
//display message for choice 5
break; //to break control
default:printf(“ SORRY..INVALID CODE..\nENTER YOUR CODE AGAIN .”);
} //end of switch
} //end of main()