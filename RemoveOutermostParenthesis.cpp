#include <iostream>
using namespace std;
int main()
{
    string a="(()())(())";
    string b;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]=='(' && a[i+1]==')')
        {
            b.push_back(a[i]);
            b.push_back(a[i+1]);
        }
    }
    cout<<b;
}