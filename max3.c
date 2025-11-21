#include<stdio.h>

int main ()
{
    int a,b,c,d;
    printf("enter a,b,c,d values");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
        if(a>c)
            if(a>d)
            printf("a is maximum %d",a);
            else
            printf("d is maximum %d",d);
        else
            if(c>d)
            printf("c is maximum %d",c);
            else
            printf("d is maximum %d",d);
    else
        if(b>c)
            if(b>d)
            printf("b is maximum %d",b);
            else
            printf("d is maximum %d",d);
        else
            if(c>d)
            printf("c is maximum %d",c);
            else
            printf("d is maximum %d",d);
    
    return 0;

}