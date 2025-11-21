#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],pro[10][10],i,j,k,r,c;
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
    printf("\n the product is (A*B)=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            pro[i][j]=0;
            for(k=0;k<c;k++)
            {
                pro[i][j]=pro[i][j]+a[i][k]*b[k][j];
            }
            printf("%d\t",pro[i][j]);
        }
        printf("\n");
    }
    return 0;
}