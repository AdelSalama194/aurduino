#include <stdio.h>

void calc(int *sum, int *sub, int num1, int num2);
void main()
{

    int sum, sub, num1, num2;

    printf("Please Enter Value 1: ");
    scanf(" %d", &num1);
    printf("Please Enter Value 2: ");
    scanf(" %d", &num2);

    calc(&sum, &sub, num1, num2);

    printf("The result of summation: %d\n", sum);
    printf("The result of substraction: %d", sub);
}

void calc(int *sum, int *sub, int num1, int num2)
{
    *sum = num1 + num2;
    *sub = num1 - num2;
}