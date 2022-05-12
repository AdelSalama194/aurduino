#include <stdio.h>
void main(){
	float x;
	printf("please enter your grade");
	scanf(" %f", &x);
if(x<50){
	printf("your rate is failed");
}
else if(x>=50&&x<65){
	printf("your rate is normal");
}
else if(65<=x&&x<75){
	printf("your rate is good");
}
else if(75<=x&&x<85){
	printf("your rate is very good");
}
else {
	printf("your rate is excellent");
}
}