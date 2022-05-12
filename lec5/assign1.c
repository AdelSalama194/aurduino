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

    int max = arr[0];

    for (int i = 0; i < arr_len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int min = arr[0];

    for (int i = 0; i < arr_len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("The maximum value is: %d\n", max);
    printf("The minimum value is: %d", min);
}