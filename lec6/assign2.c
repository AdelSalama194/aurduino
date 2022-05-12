#include <stdio.h>

void main()
{
    int x = 2, y = 3, z = 4;
    int *p = &x, *q = &y, *r = &z;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);
    printf("Swapping pointers\n");

    r = p;
    p = q;
    q = r;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);
}