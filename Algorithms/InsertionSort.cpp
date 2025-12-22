#include <bits/stdc++.h>
using namespace std;
void InsertionSort(vector<int> &arr)
{
    int n=arr.size();
  
    for(int i=1;i<n-1;i++)
    {
       int key=arr[i];
       int j=i-1;

       while(j>=0 && arr[j]>key)
       {
        arr[j+1]=arr[j];
        j=j-1;
       }
       arr[j+1]=key;
    }
}
int main()
{
    vector<int>arr={10,40,30,20,50};
    InsertionSort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}