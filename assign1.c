#include <stdio.h>
void main(){
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,x;
	printf("enter num1\n");
	scanf(" %d", &num1);
	printf("enter num2\n");
	scanf(" %d", &num2);
	printf("enter num3\n");
	scanf(" %d", &num3);
	printf("enter num4\n");
	scanf(" %d", &num4);
	printf("enter num5\n");
	scanf(" %d", &num5);
	printf("enter num6\n");
	scanf(" %d", &num6);
	printf("enter num7\n");
	scanf(" %d", &num7);
	printf("enter num8\n");
	scanf(" %d", &num8);
	printf("enter num9\n");
	scanf(" %d", &num9);
	printf("enter num10\n");
	scanf(" %d", &num10);
	printf("enter the value to serch: ");
	scanf(" %d", &x);
	if(x==num1){
		printf("value is exist at element num1");
	}
	else if(x==num2){
		printf("value is exist at element num2");
	}
	else if(x==num3){
		printf("value is exist at element num3");
	}
	else if(x==num4){
		printf("value is exist at element num4");
	}
	else if(x==num5){
		printf("value is exist at element num5");
	}
	else if(x==num6){
		printf("value is exist at element num6");
	}
	else if(x==num7){
		printf("value is exist at element num7");
	}
	else if(x==num8){
		printf("value is exist at element num8");
	}
	else if(x==num9){
		printf("value is exist at element num9");
	}
	else if(x==num10){
		printf("value is exist at element num10");
	}
	else{
		printf("num no exist");
	}
}