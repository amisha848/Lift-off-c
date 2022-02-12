#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d", &a, &b);
    
	if (a<b){
		printf("b is greater than a");
	}	
	else if (a>b){
		printf("a is greater than b");
	}
	else{
		printf("a and b are equal");
	}
	return 0;
}
