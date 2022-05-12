#include<stdio.h>

int size_of_array=10;
void main(){
	int array[size_of_array],sum=0;
	float aver;
	for(int i=0; i<size_of_array; i++){
		printf("please enter element number %d :\n",i);
		scanf(" %d", &array[i]);
		sum=sum+array[i];
	}
	aver=sum/10;
	printf("sum of array elements = %d\n",sum);
	printf("average of array elements = %f",aver);
	
}