#include<stdio.h>
#include<math.h>
int main()
{
    // syntax
    int age =22;
    int *ptr = &age; //pointer is variable storing adress of variable age
    /*
    *  value at adresss
    & adress of operator
    */
    int _age =*ptr; //_age is a variable (pointer) storing adress of poiner storing adress of variable age.
    printf("%d \n", _age); // to print int value stored in pointer _age
    printf("%p \n",&age); // to print adress of age
    printf("%p\n" ,ptr);// to print adress of variable that ptr stores i.e. age
    printf("%p \n", &ptr);// to print adress of pointer storing adress of variable.
    printf("%d \n",*ptr);// to print value stored at adress.
    printf("%d \n", *(&age)); // to print value stored at adress of 
    //pointer to poiner (pptr) variable that stores memory adress of another pointer
    int number = 32;
    int *ptr = &number;
    int **pptr = &ptr;
    printf("%p \n",ptr);
    printf("%p \n", pptr);
    return 0;
}
