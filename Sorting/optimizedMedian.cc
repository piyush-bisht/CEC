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
void findMedian(int arr[],int low,int high,int mid,int ans)
{
    if(low<high)
    {
        int n=sizeof(arr)/sizeof(arr[0]);
        randomize(arr,low,high);
        int pivotIndex=partition(arr,low,high);
        if(mid=pivotIndex && n%2!=0)
        {
                ans=arr[mid];
                    cout<<ans;
                return;
        }
        else if((pivotIndex==mid||pivotIndex=mid+1) && n%2==0)
        {
            ans+=arr[pivotIndex];
            
        }
        if(arr[mid]<arr[pivotIndex])
            findMedian(arr,low,pivotIndex-1);
        else
            findMedian(arr,pivotIndex+1,high);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mid=n/2;
    findMedian(arr,0,n-1,mid);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";  
}