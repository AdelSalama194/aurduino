#include <stdio.h>
void main(){
	int x;
	printf("enter your number");
	scanf(" %d", &x);
	if(x%2 ==0){
		printf("the number is even");
	}
	else{
		printf("the number is odd");
	}
}