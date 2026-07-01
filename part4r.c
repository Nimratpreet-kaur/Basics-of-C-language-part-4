// write a function named slice which takes a string an return a sliced string from index n to m
#include <stdio.h>
#include <string.h>
void slice(char str[], int n, int m);
int main()
{
    char str[100] ;
    printf("Enter string you wish to slice :");
    fgets(str , 100 , stdin);
    int n,m;
    printf("Index you wish to start slicing from: ");
    scanf("%d",&n);
    printf("Index you wish to stop slicing at :");
    scanf("%d",&m);
    slice(str,n , m);
    return 0;  
}
void slice(char str[], int n, int m)
{
    char newStr[100];
    int j =0;
    for (int i = n; i <= m; i++, j++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}