//write function to reverse an array
#include<stdio.h>
void reverse(int arr[] , int n);
void printArr(int arr[], int n);
int main()
{
    int arr[5] = {1,2,3,4,5};
    reverse(arr,5);
    printArr(arr , 5);
    return 0;
}

void reverse(int arr[] , int n) // call by reference as array is also a pointer
{
   for ( int i=0 ; i < n/2 ; i++)
   {
    int firstVal = arr[i];
    int secondVal = arr[n-i-1];
    arr[i] = secondVal;
    arr[n-i-1] =firstVal;
   }
}

void printArr(int arr[] , int n)
{
    for(int i=0 ; i < n ; i++)
    {
        printf("%d \t", arr[i]);
    }
}