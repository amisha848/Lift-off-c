#include<stdio.h>
void swap(int*a,int*b){
	int num;
	num=*a;
	*a=*b;
	*b=num;
}

int main(){
	int x,y;
	printf("enter 2 numbers: \n");
	scanf("%d %d",&x,&y);
	printf("values before swapping %d %d\n",x,y);
	swap(&x,&y);
	printf("values after swapping %d %d \n",x,y);
	return 0;
}
