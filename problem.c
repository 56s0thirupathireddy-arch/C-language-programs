#include<stdio.h>
void main()
{
    int p;
    float fp,d;
    printf("enter the orginal price of object ");
    scanf("%d",&p);
    if(p>=5000)
    {
        d=(p*0.2);
        fp=p-d;
        printf("the discount is %f and final price is %f",d,fp);
    }
    else if (p>=2000)
    {
        d=(p*0.1);
        fp=p-d;
        printf("the discount is %f and final price is %f",d,fp);
    }
    else
    {
        d=(p*0.05);
        fp=p-d;
        printf("the discount is %f and final price is %f",d,fp);
    }
}