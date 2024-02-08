#include<bits/stdc++.h>
using namespace std;
void subarray_withsum(int n ,int arr[],int sum)
{
   int  ans=0;
   int start=0;
  for (int i = 0; i < n; i++)
  {
    ans=ans+arr[i];
    while (ans>sum)
    {
        ans=ans-arr[start];
        start++;
    }
    if(ans==sum)
    {
        std::cout<<"Sum found";
    }
  }
  
}
int main()
{
return 0;
}