#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],sum[10][10],i,j,r,c;
    printf("enter the no of rows:");
    scanf("%d",&r);
    printf("enter number of columns:");
    scanf("%d",&c);
    printf("\n the elements of A :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n the elements of B :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n the sum is (A+B)=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}