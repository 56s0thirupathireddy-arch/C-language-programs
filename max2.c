#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter a , b , c values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        if(a>c)
        printf("a is maximum %d",a);
        else
        printf("c is maximum %d",c);
    else
        if(b>c)
        printf("b is maximum %d",b);
        else
        printf("c is maximum %d",c);
    
    return 0;    
}