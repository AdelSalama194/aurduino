#include<stdio.h>

int multi_num(int n);
int main(){
	int n;
	printf("please enter the number");
	scanf(" %d", &n);
	printf("the factorial of %d is = %d",n,multi_num(n));
	return 0;
}
int multi_num(int n){
	if(n>=1){
		return n*multi_num(n-1);
	}
	else{
		return 1;
	}
}