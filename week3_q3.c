#include<stdio.h>
void evod(int *x){
	if (*x%2==0)
	     printf("Even number");
    else
        printf("Odd number");
}

int main(){
	int x;
	printf("enter a number \n");
	scanf("%d",&x);
	evod(&x);
	return 0;
}
