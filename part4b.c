#include<stdio.h>
#include<math.h>
int main()
{
    //print value of i from its pointer to pointer
    int i = 7;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d \n",*ptr);
    printf("%d \n",**pptr);
    return 0;
}