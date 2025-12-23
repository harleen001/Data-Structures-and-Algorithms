#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int l,int mid, int r)
{
    //we have sorted array from l to mid and from mid to r, we only need to sort them
    int n1=mid-l+1;
    int n2=r-mid;
    
    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }
    //now two arrays created, now merging them by taking two pointers
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++; i++;
        }
        else{
            arr[k]=b[j];
            k++; j++;
        }
    }
    while(i<n1)
    {  
            arr[k]=a[i];
            k++; i++;
    }
    while(j<n2)
    {
            arr[k]=b[j];
            k++; j++;
    }
    
}
void Mergesort(vector<int> &arr,int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        Mergesort(arr,l,mid);
        Mergesort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}
int main()
{
    vector<int>arr={10,40,30,20,50};
    Mergesort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}