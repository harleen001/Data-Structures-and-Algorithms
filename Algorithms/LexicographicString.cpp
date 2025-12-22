#include <bits/stdc++.h>
using namespace std;

void sortlexico(char &fruit)
{
    int n=fruit.size();
    for(int i=0;i<n-1;i++)
    {
     //finding minimum element
      int min_index=i;
      for(int j=i+1;j<n;j++)
      {
      if(strcmp (fruit[j],fruit[min_index])>0)
      {
        min_index=j;
      }
    }
     //place minimum at begining of unsorted array
     if(i!=min_index)
     {
 swap(fruit[i],fruit[min_index]);
     }
    
}
}

int main()
{
    char fruit[][60]={"papaya","lime","watermelon","apple","mango","kiwi"};
    return 0;
}