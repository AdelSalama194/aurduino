#include<stdio.h>
int main(){
	int x,y;
	printf("enter value of x : ");
	scanf(" %d", &x);
	printf("enter value of y : ");
	scanf(" %d", &y);
	
	int z=y;
	y=x;
	x=z;
	printf("x after swap is : %d\ny after swap is : %d",x,y);
}