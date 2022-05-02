#include<stdio.h>
int lar(int x[],int n){
	int lar=0,i;
	for( i=0;i<n;i++){
		if (x[i]>lar){
			lar=x[i];
		}
	}
	return lar;
}

int main(){
	int n;
	printf("enter the lenght of array \n");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		printf("enter element %d :\n",i);
		scanf("%d",&a[i]);
	}
	printf("largest number is %d \n",lar(a,n));
	return 0;
}

