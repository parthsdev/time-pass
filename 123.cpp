#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int res=arr[0];
    int maxe=arr[0];
    for (int i = 1; i < n; i++)
    {
        maxe=max(arr[i],maxe+arr[i]);
    }
    
   
return 0;
}