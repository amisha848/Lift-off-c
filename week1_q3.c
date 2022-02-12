#include<stdio.h>
int main(){
	int n, r;
	printf("Enter a number:");
	scanf("%d", &n);
	r=n%2;
	switch(r){
		case 0:
			printf("Even number");
			break;
		case 1:
			printf("Odd number");
			break;
	}
	return 0;
}

