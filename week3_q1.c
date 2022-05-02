#include<stdio.h>
int gcd(int x,int y)
{
	if (y != 0 )
	      return gcd(y,x%y);
	else
	      return x;
}
int main(){
	int x,y,r;
	printf("enter 2 numbers\n");
	scanf("%d %d",&x,&y);
	r=gcd(x,y);
	printf("GCD of the numbers is %d",r);
	return 0;
}
