#include <stdio.h>

int sum(int *x, int *y);

void main()
{
    int x, y;

    printf("Please Enter Value 1: ");
    scanf(" %d", &x);
    printf("Please Enter Value 2: ");
    scanf(" %d", &y);

    printf("The result is: %d", sum(&x, &y));
}

int sum(int *x, int *y)
{
    return *x + *y;
}