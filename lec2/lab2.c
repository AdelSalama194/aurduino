#include <stdio.h>
void main(){
	float x,salary;
	printf("please enter your working hours ");
	scanf(" %f", &x);
	salary=x*50;
	if(x<40){
		salary=salary-.1*salary;
		printf("your salary is %f",salary);
	}
	else{
		printf("your salary is %f",salary);
	}
}