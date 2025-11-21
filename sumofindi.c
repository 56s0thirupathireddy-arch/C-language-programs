#include<stdio.h>
void main()
{
	int n,r,s=0;
	printf("enter value of n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("%d",s);
}
