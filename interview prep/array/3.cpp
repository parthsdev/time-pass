#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           if(arr[i]>arr[j])
           {
            swap(arr[i],arr[j]);
           }
        }
        
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void bubble_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j] >arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        
    }

     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int n;cin>>n;int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    bubble_sort(arr,n);
return 0;
}

vector<vector<int>>dp(n+1,vector<int>(n,-1));