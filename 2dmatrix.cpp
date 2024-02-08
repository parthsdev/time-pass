
#include <bits/stdc++.h>
using namespace std;
int max_sum(int arr[],int n,int k)
{
    int count=0;
    int sum=0;
    int max_sum=INT_MIN;
    for (int i = 0; i < k; i++)
    {
        sum=sum+arr[i];
    }
    for(int i=k;i<n;i++)
    {
      
       curr_sum=curr_sum+arr[i]-arr[i-k];
        max_sum=max(max_sum,curr_sum); 

    }
}
bool sum()
{
    int n;cin>>n;
    int arr[n];
   int required_sum=0;

    int max_sum=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            if(sum==curr_sum)
            {
                cout<<"Sum found";
            }
        }
    }

}
int main()
{

    int n, m;
    cin >> n >> m;
    vector<vector<int>> dp(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            swap(dp[i][j], dp[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int low = 0;
        int high = n - 1;
        while (low < high)
        {
            swap(dp[low][i], dp[high][i]);
            low++;
            high--:
        }
    }


    int left_sum=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum-arr[i];
        if(left_sum==sum)return true;

        left_sum=left_sum+arr[i];
    }
    
  
    return 0;
}


void 90degeee(int arr[n][n],int n,int m )
{
   for (int i = 0; i < n; i++)
   {
    for (int i = i+1; i < n; i++)
    {
        swap(arr[i][j],arr[j][i]);
    }
    
   }

   for(int i=0;i<n;i++)
   {
    int low=0;
    int high=n-1;
    while(high>low)
     {
        swap(arr[low][i],arr[high][i])
        low++;high--;
     }
   }
   
}
