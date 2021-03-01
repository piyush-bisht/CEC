#include<iostream>
using namespace std;
void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selectionSort(int arr[],int n)
{
    
    for(int i=0;i<n-1;i++)
    {
        int temp=arr[i];
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<temp)
            {
                index=j;
                temp=arr[j];
            }
        }
        swap(&arr[i],&arr[index]);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}