#include<stdio.h>

int size_of_array=10;
void main(){
	int array[size_of_array];
	for(int i=0; i<size_of_array; i++){
		printf("please enter element number %d :\n",i);
		scanf(" %d", &array[i]);
	}
	for(int i=size_of_array-1; i>=0; i--){
		printf("the reversed order is : \n");
		printf("%d",array[i]);
	}
	
}