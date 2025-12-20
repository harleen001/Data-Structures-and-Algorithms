#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &arr)
{
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-i-1;j++)
      {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
      }
    }
}

int main()
{
    vector<int>arr={10,30,40,20,60,50};
    BubbleSort(arr);

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
    return 0;
}