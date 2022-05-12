#include <stdio.h>
void main(){
	int x;
	printf("3 * 4 = ");
	scanf(" %d", &x);
	while(x!=12){
		printf("not correct,please try again");
		scanf(" %d", &x);
	}
	printf("thank you");
}