#include<iostream>
using namespace std;
struct freq{
    int elem;
    int freq;
};
int findFrequency(int arr[],int n,freq f[])
{
    int j=0;
    int found=0;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<j;k++)
        {
            if(arr[i]==f[k].elem)
            {
                f[k].freq++;
                found=1;
            }
        }
        if(!found)
        {
            f[j].elem=arr[i];
            f[j++].freq=1;
        }
        found=0;
    }
    for(int i=0;i<j;i++)
        cout<<f[i].elem<<":"<<f[i].freq<<endl;
        
    return j;
}
void findMajorityElement(int arr[],int n)
{
    freq f[n];
    int size=findFrequency(arr,n,f);
    for(int i=0;i<size;i++)
    {
        if(f[i].freq>=n/2)
        {
            cout<<"MAJORITY ELEMENT "<<f[i].elem;
            return;
        }
    }
    cout<<"NO MAJORITY ELEMENT PRESENT";
  
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mid=n/2;
    findMajorityElement(arr,n);
}