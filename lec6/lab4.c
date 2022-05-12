#include <stdio.h>

void main()
{
    int arr[10];
    int sum;
    int *ptr = arr;

    for (int i = 0; i < 10; i++)
    {
        printf("Please Enter number %d: ", i);
        scanf(" %d", &arr[i]);
    }

    for (int i = 0; i < 10; i++){
        sum += *(ptr + i);
    }
    printf("The summation result is: %d", sum);
}