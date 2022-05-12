#include <stdio.h>
void main(){
	float num1,num2,num3;
	printf("enter number1:");
	scanf(" %f", &num1);
	printf("enter number2:");
	scanf(" %f", &num2);
	printf("enter number3:");
	scanf(" %f", &num3);
	if(num2<num1&&num1>num3){
		printf("maximum number is:%f",num1);
	}
	else if(num1<num2&&num2>num3){
		printf("maximum number is:%f",num2);
	}
	else if(num1<num3&&num3>num2){
		printf("maximum number is:%f",num3);
	}
	else{
		printf("maximum number is:%f",num1);
	}
}