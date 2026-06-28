// arrays are collection of similar data type stored at contiguous memory locations.
#include <stdio.h>
int main()
{
    int marks[3];
    printf("Enter your physics marks: \n");
    scanf("%d", &marks[0]);
    printf("Enter your maths marks: \n");
    scanf("%d", &marks[1]);
    printf("Enter your chemistry marks: \n");
    scanf("%d", &marks[2]);
    printf("Physics= %d , Mathematics = %d , Chemistry = %d .", marks[0], marks[1], marks[2]);
    return 0;
}