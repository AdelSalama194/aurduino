#include <stdio.h>
void main(){
	int x,y;
	printf("please enter the number : ");
	scanf(" %d", &y);
	while(x<=y){
	printf("%d * %d = %d\n",y,x,x*y);
	x++;
	}
	
}