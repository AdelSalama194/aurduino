#include <stdio.h>

void scalar(int arr1[], int arr2[], int *scalar_res);

void main()
{
    int arr1[5], arr2[5], scalar_res[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Please Enter number %d of first array: ", i);
        scanf(" %d", &arr1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Please Enter number %d of second array: ", i);
        scanf(" %d", &arr2[i]);
    }

    scalar(arr1, arr2, scalar_res);

    printf("Scalar multiplication result is: \n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d\n", scalar_res[i]);
    }
}

void scalar(int arr1[], int arr2[], int *scalar_res)
{
    for (int i = 0; i < 5; i++)
    {
        *(scalar_res + i) = (arr1[i] * arr2[i]);
    }
}