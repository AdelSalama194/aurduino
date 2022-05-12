#include <stdio.h>
void main(){
	int x,y;
	printf("please enter the first number");
	scanf(" %d", &x);
	printf("please enter the second number");
	scanf(" %d", &y);
	printf("x+y=%d\n",x+y);
	printf("x-y=%d\n",x-y);
	printf("x&y=%d\n",x&y);
	printf("x|y=%d\n",x|y);
	printf("x^y=%d",x^y);
}