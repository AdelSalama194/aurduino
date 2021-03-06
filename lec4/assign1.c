#include <stdio.h>

int Get_Max(int arr[], int arr_len);
int Get_Min(int arr[], int arr_len);

void main()
{
    int arr_len = 4;
    int arr[arr_len];

    for (int i = 0; i < arr_len; i++)
    {
        printf("Please Enter number %d: ", i);
        scanf(" %d", &arr[i]);
    }

    printf("The maximum value is: %d\n", Get_Max(arr, arr_len));
    printf("The minimum value is: %d", Get_Min(arr, arr_len));
}

int Get_Max(int arr[], int arr_len)
{
    int max = arr[0];

    for (int i = 0; i < arr_len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int Get_Min(int arr[], int arr_len)
{
    int min = arr[0];

    for (int i = 0; i < arr_len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}