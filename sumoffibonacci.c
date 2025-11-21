#include<stdio.h>
int main(){
    int n1=0,n2=1,n,sum=0,i,n3;
    printf("enter the n value:");
    scanf("%d",&n);
    printf("the fibonacci numbers are :%d\t%d\t",n1,n2);
    sum=n1+n2;
    for(i=1;i<=n-2;i++)
    {
      n3=n2+n1;
      printf("%d\t",n3);
      sum=sum+n3;
      n1=n2;
      n2=n3;
    }
    printf("\n the sum of fibonacci numbers are :%d ",sum);
    return 0;  
}