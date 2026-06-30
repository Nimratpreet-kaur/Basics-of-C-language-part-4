#include <stdio.h>
#include <string.h>
// strlen(str) counts number of characters excluding '\0'
//strcpy(newStr, oldStr) copies value of old string to new string
//strcat(firstStr, secondStr) concatenates first string with second
//strcmp(firstStr,secStr) compares 2 strings and return a value 
//first > sec = positive , first < sec = negative , 0 if equal
int main ()
{
    char name[] = "Nimrat";
    int len = strlen(name);
    printf("length is : %d\n",len);
    char oldStr[] = "old";
    char newStr[] = "New";
    strcpy(newStr,oldStr);
    puts(newStr);
    char firstStr[100] = "Hello ";
    char secondStr[] = "World!";
    strcat(firstStr,secondStr);
    puts(firstStr);
    puts(secondStr);
    char fruit1[] = "Apple";// comparison occur index wise
    char fruit2[] = "Banana";//b>a as in char a is smallest and it increases with alphabet;
    printf("%d\n",strcmp(fruit1,fruit2));// ASCII diff is printed
    return 0;
}