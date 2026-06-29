//write program to store first n fibonscci numbrers
#include<stdio.h>

int main()
{
    int n;
    printf("Enter n (n>2) : ");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("First %d Fibonacci numbers are : \n",n);
    for(int i =0 ; i< 2; i++)
    {
        printf("%d\t",fib[i]);
    }
    for ( int i = 2 ; i < n ; i++ )
    {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d \t",fib[i]);
    }
    printf("\n");
    return  0;

}