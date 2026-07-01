//write a function to count the occurance of vowels in a string
#include <stdio.h>
#include <string.h>
int countVowels(char str[]);
int main()
{
    char str[100];
    printf("Enter string you wish to count vowels in : ");
    fgets(str,100,stdin);
    printf("There are %d vowels in this string " ,countVowels(str));
    return 0;
}
int countVowels(char str[])
{
   int count = 0;
   int len = strlen(str);
    for ( int i =0 ; i <len ; i++)
    {
        if (str[i] == 'a' ||str[i] == 'e'|| str[i] =='i' || str[i] =='o' || str[i] =='u' ||str[i] =='A' ||str[i] == 'E'||str[i] =='I' || str[i] == 'O' || str[i] =='U')
        {
            count++;
        }
        
    }
    return count;
}