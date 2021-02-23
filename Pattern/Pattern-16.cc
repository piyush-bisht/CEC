#include<stdio.h>
int main()
{
    int n=5
    ;
    for(int i=1;i<=n/2+1;i++)
    {
        for(int j=1;j<=((n/2)+1)-i;j++)
        {
            printf(" "); 
        }
        
        for(int j=1;j<=2*i-1;j++)
        {
            if(j<n/2+1)
                printf("%d",j);
            else
                printf("%d",n-j+1);    
        }
        printf("\n");
    }
    for(int i=n/2+2;i<=n;i++)
    {
        for(int j=1;j<=(i-(n/2+1));j++)
            printf(" ");
        for(int j=1;j<=2*(n+1-i)-1;j++)
        {
            if(j<n/2+1)
                printf("%d",j);
            else
                printf("%d",n-j+1); 
        }
            
        printf("\n");
    }
}