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
findMajorityElement(int arr[],int n)
{
    rQuickSort(arr,0,n-1);
    int count=0;
    int found=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else{
            if(count==n/2)
            {
                cout<<"MAJORITY ELEMENT:"<<arr[i]<<endl;
                found=1;
                break;
            }  
            count=0;
        }
        
    }
    if(!found)
        cout<<"NOT PRESENT";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    findMajorityElement(arr,n);
    
}