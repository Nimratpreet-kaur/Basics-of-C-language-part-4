//make a program that input user's firstname and prints its length
#include <stdio.h>
int countlength(char arr[]);
int main()
{
    char firstName[100];
    printf("Enter your first name: ");
    fgets(firstName,100,stdin);
    printf("Length of your first name is %d\n",countlength(firstName));
    return 0;
}
int countlength(char arr[])
{
    int count = 0;
    for(int i=0 ; arr[i] !='\0'; i++)
    {
        count++;
    }
    return count-1 ;
}