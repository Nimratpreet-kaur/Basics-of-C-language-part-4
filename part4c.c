#include<stdio.h>
void swap(int x , int y);
void _swap(int *x, int *y);
int main()
{
    // swap a and b
    int a = 3;
    int b = 5;
    swap(a , b );
    printf("a = %d and b = %d \n", a, b);
    _swap( &a , &b);
    printf("a = %d and b = %d \n", a, b);
    return 0;

}
// call by value
void swap( int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
// call by reference
void _swap(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;

}