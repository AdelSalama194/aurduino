#include <stdio.h>

void main()
{
    int arr_len = 10;
    int arr[arr_len];

    for (int i = 0; i < arr_len; i++)
    {
        printf("Please Enter number %d: ", i);
        scanf(" %d", &arr[i]);
    }

    for (int i = 0; i < arr_len - 1; i++)
    {
        for (int j = 0; j < arr_len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j + 1] + arr[j];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }

    printf("Values after sorting are:\n");

    for (int i = 0; i < arr_len; i++)
    {
        printf("%d\n", arr[i]);
    }
}