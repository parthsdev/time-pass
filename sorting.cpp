#include<bits/stdc++.h>
using namespace std;
//bubble sort
void bubble_sort(int n , vector<int>arr)
{
  for (int i = 0; i < n; i++)
  {
   for (int j = 0; j <n-1-i; j++)
   {
     if(arr[j]  > arr[j+1])
     {
        swap(arr[j],arr[j+1]);
     }
   }
   
    
  }
  
}
int main()
{
return 0;
}
