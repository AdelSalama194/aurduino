#include <stdio.h>
void main(){
	int id;
	printf("please enter your id ");
	scanf(" %d", &id);
	switch(id)
	{
		case 1234:
			printf("welcome ahmed");
			break;
		
		case 5678:
			printf("welcome youssef");
			break;
		
		case 1145:
			printf("welcome mina");
			break;
		
		default:
			printf("wrong id");
		
	}
}