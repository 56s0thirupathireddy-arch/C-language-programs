#include<stdio.h>
void main()
{
	int n,r,rev=0,t;
	printf("enter n value");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n%10;
	}
	if(t==n)
	  printf("%d is palindrome",t);
	else
	  printf("%d is not a palindrome",t);  
}
