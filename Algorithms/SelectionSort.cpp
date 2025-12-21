#include <bits/stdc++.h>
using namespace std;
void Selectionsort(vector<int> &arr)
{
    int n=arr.size();
  
    for(int i=0;i<n-1;i++)
    {
         int mini=i;
         for(int j=i+1;j<n;j++)
         {
            if(arr[j]<arr[mini])
            {
                mini=j; //if short assign short value
            }
         }
       if(mini!=i)
       {
        swap(arr[i],arr[mini]);//at every loop swap
       }
    }
}
int main()
{
    vector<int>arr={10,40,30,20,50};
    Selectionsort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}