#include<stdio.h>
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=n-i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}