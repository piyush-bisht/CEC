#include<bits/stdc++.h>
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
    int i=low,j=low;
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
int findMedian(int arr[],int low,int high,int mid)
{
    if(low<=high)
    {
        randomize(arr,low,high);
        int pivotIndex=partition(arr,low,high);
        if(mid==pivotIndex)
            return arr[mid];
        if(arr[mid]<arr[pivotIndex])
            return findMedian(arr,low,pivotIndex-1,mid);
        else
            return findMedian(arr,pivotIndex+1,high,mid);
    }
}
double median(int arr[],int n)
{
    if(n%2==0)
        return (findMedian(arr,0,n-1,n/2)+findMedian(arr,0,n-1,(n/2)-1))/2.0;
    else    
        return findMedian(arr,0,n-1,n/2);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mid=n/2;
    cout<<median(arr,n)<<endl;

}