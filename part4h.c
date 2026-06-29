//function to count number of odd numbers in an array
#include<stdio.h>
void countOdd(int arr[] , int n);
int main()
{
    int numbers[10] = {11,13,12,15,3,6,7,8,9,19};
    countOdd(numbers, 10);
    return 0;
}
void countOdd(int arr[], int n)
{
    int count = 0;
    for (int i =0 ; i < n ; i++)
    {
        if ( arr[i] % 2 != 0)
        {
            count++;
        }
    }
    printf("Number of odd integers in array : %d",count);
}