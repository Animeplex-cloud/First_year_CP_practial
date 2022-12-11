#include<stdio.h> //include header files
#include<conio.h>
#include<string.h>
void main() // function main() started
{
char a[10]="Computer"; //array declaration
char b[10]="SCIENCE", d[10]; //array declaration
int i, n; //variable declaration
clrscr(); //clear output screen
n=strlen(a); //calculate length using strlen() function
printf("Length of string is %d \n", n); //display length
strupr(a); //string is converted to upper case using strupr() function
printf("Uppercase=%s\n",a ); //display new string
strlwr(b); //string is converted to lower case using strlwr() function
printf("lowercase string is %s\n", b); //display new string
strcpy(b,a); //copy string b to string a using strcpy() function
printf("Copy of string is %s\n", b); //display new string
strncpy(d,a,4); //copy first 4 characters of a in d
printf("Now the string is %s\n", d); //display new string
strcat(a,b); //strcat string function to concatenate 2 strings
printf("Now the string is %s\n", a); //display new concatenated string
i=strcmp(b, a); //strcmp string function to compare 2 strings
if(i==0) //check if condition
printf("Strings are same\n"); //display message if if test is true
else // if if test is false
printf("Strings are not same\n"); //display message
strrev(b); //string function to find reverse
printf("Reversed string is %s", b); //display reverse of string
getch(); //read character from user
} //end of main()