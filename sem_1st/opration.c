#include<stdio.h> //include header files
main()// function main() started
{
struct book //structure definition
{
char name[20];
int price,pages;
}; //end of structure definition
struct book b1; //structure variable created
FILE *fp; //File pointer declared to deal with files
fp=fopen(“abc.txt”,”w”); //open file in write mode
printf(“Enter the book name ,price and pages for book:”); //display message
scanf(“%s%d%d”,b1.name,&b1.price,&b1.pages); // read values and store in structure
fwrite(&b1,sizeof(b1),1,fp); //Writing byte by byte content of book structure in file.
fclose(fp); //close file
fp=fopen(“abc.txt”,”r”); //open file in read mode
printf(“Information of book:\n”); //display message
fread(&b1,sizeof(b1),1,fp); // reading byte by byte content of book structure from file.
printf(“Name=%s Price=%d pages=%d”,b1.name,b1.price,b1.pages);
//display values from structure using structure variable and dot operator
fclose(fp); //close file
} //end of main()