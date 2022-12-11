#include<stdio.h> //include header files
#include<conio.h>
void main() // function main() started
{
struct student //structure definition
{
int roll;
char name[20];
float per;
}s; //end of structure definition, structure variable s declared
clrscr(); //clears output screen
printf("Enter student details:\n"); //display message
printf("\nEnter roll number of student:\n"); //display message
scanf("%d",&s.roll); //take value of roll no. from user and store it in structure
printf("\nEnter name of student:\n");//display message
scanf("%s",s.name); //take value of name from user and store it in structure
printf("\nEnter percentage of student:\n"); //display message
scanf("%f",&s.per); //take value of percentage from user and store it in structure
printf("Entered Student details are:\n"); //display message
printf("\nRoll number : %d\n Name : %s\n percentage : %f\n",s.roll,s.name,s.per);
//display values from structure using structure variable sand dot operator
getch(); //read character
} //end of main()