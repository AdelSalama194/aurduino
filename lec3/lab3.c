#include <stdio.h>
void main(){
	int x,y,sum;
	float aver;
	for(x=0;x<10;x++){
		y=0;
		printf("number %d\n", x);
		scanf(" %d", &y);
		sum=sum+y;
	}
	sum=sum-1;
	aver=sum/10;
	printf("aver=%f\n",aver);
	printf("sum=%d",sum);
}