#include <stdio.h>
void main(){
	int x,factorial=1;
	printf("enter the number:");
	scanf(" %d", &x);
	do{
		factorial=x*factorial;
		x--;
	}while(x!=0);
	printf("factorial=%d",factorial);
}