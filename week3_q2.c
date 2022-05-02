#include<stdio.h>
int prime(int n,int i)
{
	if (i != 1){
		if (n%i != 0)
		     return prime(n,i-1);
		else
		    return 0;
	}
	else
	   return 1;
}
int main()
{
	int n=0;
	printf("enter a number \n");
	scanf("%d",&n);
	if (prime(n,n%2)==1)
	         printf("Prime number");
	else
	         printf("not a prime number");
	return 0;
}
