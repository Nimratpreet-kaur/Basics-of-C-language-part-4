// take a string input from user using %c
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char ch;
    int i = 0;
    while(ch != '\n')// '\n' means user pressed enter key;
    {
        scanf("%c",&ch);
        str[i]= ch;
        i++;
    }
    str[i] ='\0';
    puts(str);
    return 0;
}