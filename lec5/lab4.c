#include<stdio.h>


int soa=10;
	int x,found=0;

void main(){
	
	int arr[soa];
	
	for(int i=0; i<soa; i++){
		printf("please enter num %d : ",i);
		scanf(" %d", &arr[i]);
	}

	printf("please enter the value search :");
	
	scanf(" %d", &x);
	
	
	for(int i=0; i<soa; i++){
		if(arr[i]==x){
			found++;
		}
	}
	if(found==0){
		printf("value not exist");
	}
	
	else{
	printf("value exist %d times",found);
	}
}