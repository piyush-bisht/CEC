#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i)-1;j++)
        {
            
            if(j<=i)
            {    printf("%d",j);
                
            }
            else
                printf("%d",n-j);    
        }
        printf("\n");
    }
}