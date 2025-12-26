#include <iostream>
using namespace std;
int main()
{
    int digit=1;
    int count=0;
    for(int i=1;i<=20;i++)
    {
        int temp=i;
        while(temp>0)
        {
            if(temp%10==digit)
            {
                count++;
            }
            temp=temp/10;
        }
    }
    cout<<count;
    return 0;
}