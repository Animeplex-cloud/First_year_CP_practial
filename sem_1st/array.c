# include<stdio.h> //include header files
# include<conio.h>
void main () // function main() started
{
int a[10],i,j,temp; // variable declaration
clrscr(); //clears output screen
printf("Enter 10 numbers:\n"); //display message
for(i=0;i<10;i++) //for loop to store values in array using followed scanf statement
scanf("%d", &a[i]);
printf("Sorted array is:"); //display message
for(i=9;i>=0;i--) //no. of passes
{
for(j=0;j<i;j++) //no. of locations
{
if (a[j]>a[j+1]) //if first value in array is greater than second
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp; //swapped values of these two locations
} //end of if
} //end of inner for loop
} //end of outer for loop
for(i=0;i<10;i++) //for loop to read from i=0 to 9 locations
printf("%d\t",a[i]); //print value of array a at location i
getch(); //read character from user
} //end of main()