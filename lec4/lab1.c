#include <stdio.h>

int get_max(int value1,int value2);

void main(){
	int value1,value2;
	printf("enter value1:");
	scanf(" %d", &value1);
	printf("enter value2:");
	scanf(" %d", &value2);
	printf("the maximum value is: %d", get_max(value1,value2));
}
int get_max(int value1,int value2){
	if(value1>value2){
		return value1;
	}
	else if(value1<value2){
		return value2;
	}
	else{
		return value1,value2;
	}
}