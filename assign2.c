#include <stdio.h>

int ops(int op_id);
void main()
{

    int op_id;

    printf("Please enter the operation ID: ");
    scanf(" %d", &op_id);

    printf("The result is: %d", ops(op_id));
}

int ops(int op_id)
{
    int operand1, operand2, result;
    switch (op_id)
    {

    case 1:
        printf("Please enter first operand: ");
        scanf(" %d", &operand1);
        printf("Please enter second operand: ");
        scanf(" %d", &operand2);
        result = operand1 + operand2;
        break;

    case 2:
        printf("Please enter first operand: ");
        scanf(" %d", &operand1);
        printf("Please enter second operand: ");
        scanf(" %d", &operand2);
        result = operand1 - operand2;
        break;

    case 7:
        printf("Please enter operand: ");
        scanf(" %d", &operand1);
        result = ~operand1;
        break;

    case 8:
        printf("Please Enter first operand: ");
        scanf(" %d", &operand1);
        printf("Please Enter second operand: ");
        scanf(" %d", &operand2);
        result = operand1 ^ operand2;
        break;

    case 9:
        printf("Please Enter first operand: ");
        scanf(" %d", &operand1);
        printf("Please Enter second operand: ");
        scanf(" %d", &operand2);
        result = operand1 % operand2;
        break;

    case 10:
        printf("Please enter operand: ");
        scanf(" %d", &operand1);
        result = operand1++;
        break;

    default:
        printf("Wrong ID");
        break;

    return result;
    }
}