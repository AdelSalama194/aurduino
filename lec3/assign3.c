#include <stdio.h>
void main(){
	int x,y,n;
	printf("enter the hight of the pyramid");
	scanf(" %d", &n);
	for(x=1; x<=n; x++){
		for(y=1; y<=2*n-1; y++){
			if(y>=n-(x-1) && y<=n+(x-1)){
							printf("*");
			}
			else{
							printf(" ");
			}
		}
					printf("\n");
	}
}