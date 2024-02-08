#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max_ending=0;
    int ans=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_ending=max(arr[i],arr[i]+max_ending);
        ans=max(ans,max_ending);
    }
    cout<<ans;
return 0;
}