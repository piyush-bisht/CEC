#include<stdio.h>
int main()
{
    int n=5;
    
    for(int i=0;i<=n/2;i++)
    {
        for(int j=0;j<n/2-i;j++)
        {
            printf(" ");
        }
        for(int j=i+1;j>0;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int i=n/2+1;i<n;i++)
    {
        for(int j=0;j<(i-n/2);j++)
        {
            printf(" ");
        }
        for(int j=n-i;j>0;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}