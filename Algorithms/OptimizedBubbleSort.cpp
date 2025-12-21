#include <bits/stdc++.h>
using namespace std;

void OptimizedBubbleSort(vector <int> &arr)
{
int n=arr.size();
for(int i=0;i<n-1;i++)
{
    int flag=0;
    for(int j=0;j<n-i-1;j++)
    {

        if(arr[j]>arr[j+1])
        {
             int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag+=1;
        }
    }
    if(flag==0){break;}
}
}
int main()
{
    vector<int>arr={30,20,10,40,50};
    OptimizedBubbleSort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}