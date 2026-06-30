/*
create a string firstName and lastName
to store details of user and print all
characters using loop. 
*/
#include <stdio.h>
void printString(char arr[]);
int main()
{
    char firstName[50] ;
    char lastName[50] ;//max word limit;
    printf("Enter your first name : ");
    scanf("%s",firstName);
    // remember : %s in scanf() cannot input multiple words with spaces
    // instead can use gets() {outdated} , fgets(str,n/max input,file/stdin) to scan and puts() to output
    printf("Enter your last Name : ");
    scanf("%s",lastName);
    printf("Your full mane is\t");
    printString(firstName);
    printString(lastName);
    return 0;
}
void printString(char arr[])
{
    for(int i = 0 ; arr[i] != 0 ;i++)
    {
        printf("%c",arr[i]);
    }
    printf("\t");
}