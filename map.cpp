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
    map<int,int>m_a;
    for (int i = 0; i < n; i++)
    {
        m_a[arr[i]]++;
    }
    for(auto it:m_a)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }
return 0;
}