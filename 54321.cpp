#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter number of elements"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter size of window"<<endl;
    int k;cin>>k;
    int sum=0;
    for (int i = 0; i < k; i++)
    {
        sum=+arr[i];
    }
    int ans=INT_MIN;
    int curr_sum=sum;
    for (int i = k; i <n; i++)
    {
         ans=max(sum,curr_sum);

        curr_sum=curr_sum+arr[i]-arr[i-k];
       // cout<<sum<<endl;
       //ans=max(sum,curr_sum);

    }
cout<<ans;
return 0;
}