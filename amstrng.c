#include<stdio.h>
int main(){
    int n,r,s=0,t;
    printf("enter n value:");
    scanf("%d",&n);
    t=n;
    for( int i=n;i>0;i=i/10)
    {
        r=i%10;
        s=s+(r*r*r);
    }
    if(t==s)
      printf("given number is amstrong");
    else
      printf("given number is  not amstrong");  
   return 0;  
}