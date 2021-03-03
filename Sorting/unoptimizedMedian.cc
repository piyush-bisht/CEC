#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void randomize(int arr[],int low,int high)
{
    int n=high-low+1;
    int temp=rand()%n;
    swap(&arr[temp+low],&arr[high]);
}
int partition(int arr[],int low,int high)
{
    int i=0,j=0;
    int pivot=arr[high];
    while(j<high)
    {
        if(arr[j]<pivot)
        {
            swap(&arr[i],&arr[j]);
            i++;
        }
        j++;
    }
    swap(&arr[i],&arr[high]);
    return i;
}
rQuickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        randomize(arr,low,high);
        int pivotIndex=partition(arr,low,high);
        rQuickSort(arr,low,pivotIndex-1);
        rQuickSort(arr,pivotIndex+1,high);
    }
}
int findMedian(int arr[],int n)
{
    if(n%2==0)
        return (arr[(n-1)/2]+arr[n/2])/2;
    else
        return arr[n/2];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    rQuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
       
    cout<<endl<<findMedian(arr,n);
}