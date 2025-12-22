#include <bits/stdc++.h>
using namespace std;
void Move0s(vector<int> &arr)
{
   int n=arr.size();
   int j=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]!=0)
       {
        arr[j]=arr[i];
        j++;
       }
    }
    while(j<n)
    {
        arr[j]=0;
        j++;
    }
}
int main()
{
    vector<int>arr={0,5,0,3,4,2};
    Move0s(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}