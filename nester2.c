#include<stdio.h>

void main(){
    int i,j;
    for ( i = 5; i >=1; i++)
    {
        for ( j = 1; i <=j; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}