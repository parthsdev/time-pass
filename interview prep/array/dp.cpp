#include<bits/stdc++.h>
using namespace std;
int f(int n,vector<int>&dp)
{
   if(n<=1)return n;

   if(dp[n]!=-1)return dp[n];

   return dp[n]=f(n-1,dp)+ f(n-2,dp);
}
int frog_jumps(int ind , vector<int>&height, vector<int>&dp)
{
    if(ind==0)return 0;
    if(dp[ind]!=-1)return dp[ind]
       
    
    int step_one=frog_jumps(ind-1,height,dp)+abs(height[ind]-height[ind-1]);
      int jumptwo=INT_MAX;
    if(ind>1)
    int step_two=frog_jumps(ind-2,height,dp)+abs(height[ind]-height[ind-2]);

    return dp[ind]=min(step)
}

int frog_jumps_kth(int ind , vector<int>&height,vector<int>&dp,int k)
{
    if(ind==0)return 0;
    int min_steps=INT_MAX;

    for (int j = 1  ; j <=k; j++)
    {
       if(ind - j >=0)
       {
         
         
         
         min_steps=frog_jumps_kth(ind-j,height,dp,k)+abs(height[inf]);
         minsteps=min(min_steps,minsteps);
       }

    }

    return dp[n]=mmsteps;
    
}
int house_robber(int ind , vector<int>&dp,vector<int>&arr)
{
    if(ind==0)return 0;
    if(dp[ind]!=-1)return dp[ind];
    if(ind<0)return 0;

    int not_pick=house_robber(ind-1,dp,arr);
    int pick=INT_MAX;


   if(ind>1)
   {
    pick=arr[ind]+house_robber(ind-2,dp,arr);

   }
 

 return dp[ind]=max(not_pick,pick);
    

}

int unique_paths(int i , int j , vector<vector<int>>&dp,vector<vector<int>>&grid)
{
   if(i==0 && j==0)return 1;
   if(i<0 || j<0)return 0;

   if(grid[i][j]==-1 && i> 0 && j>)reutrn 0;


   if(dp[i][j]!=-1)return dp[i][j];


    int left=unique_paths(i-1,j,dp,grid);

    int right=unique_paths(i,j-1,dp,grid);


    return dp[i][j]=left+right;
}
int min_path(int i , int j , vector<vector<int>>&dp , vector<vector<int>>&grid)
{
    if(i==0 && j==0)return grid[0][0];

    if(i<0 || j<0)return INT_MAX;

    if(dp[i][j]!=-1)return dp[i][j];


    int up=matrix[i][j]+min_path(i-1,j-1)

}

int triangle(int i , int j , vector<vector<int>>&grid, vector<vector<int>>&dp)
{

    if(dp[i][j]!=-1)return dp[i][j];
    if(i==n-1)
    {
        return grid[i][j];
    }

    int down=grid[i][j]+triangle(i+1,j,grid,dp);

    int diagnil=grid[i][j]+triangle(i+1,j+1,grid,dp);


    return dp[i][j]=min(down,diagnil);
}

bool subset_equal_sum(int ind,int target, vector<vector<int>>&dp,vector<int>&arr)
{
    if(target==0)return true;
    if(ind==0)
    {
        return arr[0]==tareg;
    }

    if(dp[ind]!=-1)return dp[ind];
    bool not_pick=subset_equal_sum(ind-1,target,dp,arr);

    bool pick=false;

    if(target>=arr[ind])
    {
       pick=subset_equal_sum(ind-1,target-arr[ind],dp,grid);
    }

    return dp[ind][target]=pick||not_pick;


}


int count_subsets_equal(int ind , int target , vector<vector<int>>&dp, vector<int>&arr)
{
    if(target==0)return 1;
    if(ind==0)
    {
        if(arr[0]==target)return 1;
    }

    if(dp[ind][target]!=-1)return dp[ind][target];

    int not_taken=count_subsets_equal(ind-1,target,dp,arr);

    int taken=0;
    if(arr[ind]<=target)
    {
        taken=count_subsets_equal(ind-1,target-arr[ind],dp,arr);

    }

    return dp[ind][target]=taken+not_taken;
}

int knapsack(int ind , vector<int>&wt, vector<int>&val)
{
    if(ind==0)
    {
     if(wt[0]<=w)
     {
        return val[0];

     }

     else
     {
        return 0;
     }
    }

    if(dp[ind][w]!=-1)return dp[ind][w];
    

    int not_taken=knapsack(ind-1,wt,val);
    int taken=INT_MIN;
    if(wt[ind]<=w)
    {
        taken=val[ind]+knapsack(intd-1,wt,val);
    }

    return dp[ind][w]=min(not_taken,taken);

}


int minimum_coins(int ind , int target, vector<int>&arr)
{
    if(ind == 0)
    {
        if(t%arr[0]==0)
        {
            return t/arr[0];
        }
        else
        {
            return 1e9;
        }
    }

    int not_taken=minimum_coins(ind-1,target,arr);

    int take=1e9;
    if(arr[ind]<=target)
    {
        take=1+f(ind,t-arr[ind]);
    }

    return dp[ind][target]=taken+not_taken;
}

int coins()
{
    if(ind==0)
    {
        if(target>arr[ind])
        {
            if(t%arr[ind]==0)
            {
                return 1;
            }
        }
    }

    if(dp[ind][t]!=-1)return dp[ind][t];


    int nottaken=coins(ind-1,arr,)


    int taken=0;

    if(arr[ind]<=t)
    {
        taken=coins(arr,t-arr[ind]);
    }

    return dp[ind][t]=nottaken+taken;

    vector<vector<int>>dp(n,vector<int>(t+1,-1));
}

int knapsack(int ind , int  W , vector<vector<int>>&dp,vector<int>&arr)
{
   if(ind == 0 )
   {
     if(wt[0]<=w)
     {
        return val[0];
     }
     else
     {
        return 0;
     }
   }


   int not_taken=knapsack(ind-1,w,dp,arr);

   int taken=INT_MIN;

   if(arr[ind]<=w)
   {
    taken=arr[ind]+knapsack(ind-1,w-arr[ind],dp,val);
   }
}


int min_coins(int ind,int t, vector<vector<int>>&dp )
{
    if(ind == 0 )
    {
        if(t%arr[ind]==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int not_take=min_coins(ind-1,t,dp);

    int take=INT_MAX;

    if(t>=arr[ind])
    {
        take=1+min_coins(ind-1,t-arr[ind],dp);
    }

    return dp[ind][t]=min(take,not_take);
}


int coins_change2(int ind , vector<int>&arr, int target)
{
    if(ind==0)
    {
        if(target%arr[ind]==0)
        {
            return 1;
        }

        else
        {
            return 0;
        }
    }
  

  int not_take=coins_change2(ind-1,arr,target);

  int take=0;


  if(arr[ind]<=target)
  {
      take=coins_change2(ind,arr,target);
  }

  return dp[ind][target]=not_take+take;

  vector<vector<int>>dp(n,vector<int>(t+1,-1));

}

int unbounded_knapsack(int ind , int w , vector<int>&wt,vector<int>&val)
{
    if(ind == 0)
    {
        if(t%arr[ind]==0)
        {
            return (w/arr[ind]*val[ind]);
        }
    }

    if(dp[ind][w]!=-1)return dp[ind][w];

    int not_taken=unbounded_knapsack(ind-1,w,wt,val);

    int taken=INT_MIN;

    if(arr[ind]<=target)
    {
        taken=val[ind]+unbounded_knapsack(ind,w-arr[ind],wt,val);
    }

    return dp[ind][w]=max(taken,not_taken);
}

int rod_cutting(int ind ,int n , vector<int>&price , vector<vector<int>>&dp)
{
   if(ind == 0 )
   {
      return n*price[0];
   }

   if(dp[ind][n]!=-1)return dp[ind][n];


   int not_take=rod_cutting(ind,n,price,dp);
  int take=0;
   int rod_length=ind+1;

   if(rod_length<=n)
   {
       take = arr[ind]+ rod_cutting(ind,n-rod_length,price,dp);
   }

   return dp[ind][t]=max(not_taken,taken);
   
   )
}


int lcs(string s1 ,string s2)
{
    int n = s1.size();
    int m =s2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
  for (int i = 0; i <=n; i++)
  {
       dp[i][0]=0;
  }
  for (int j = 0; j <=m; j++)
  {
     dp[0][j]=0;
  }
  

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            if(s1[i-1]==s2[j-1])
            {
              
              dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
        
    }

    return dp[n][m];
    
}
int lcs(string s1,string s2)
{
    int n = s1.size();
    int m = s2.size();

    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));

    for (int i = 0; i <= n; i++)
    {
        dp[i][0]=0;

    }
    for (int j = 0; j <=m; j++)
    {
        dp[0][j]=0;
    }
    
  for (int i = 1; i <=n; i++)
  {
    for (int j = 1; j <=m; j++)
    {
       if(s1[i-1]==s2[j-1])
       {
        dp[i][j]=1+dp[i-1][j-1];
       }
       else
       {
        dp[i][j]-max(dp[i-1][j],dp[i][j-1]);
       }
    }
    
  }

  return dp[n][m];
  
}
int best_time_to_buy(vector<int>&arr)
{
    int profit=0;
    int mini=arr[0];
    int n =arr.size();
    for (int i = 1; i < n; i++)
    {
        int cost=arr[i]-mini;

        profit=max(profit,cost);

        mini=min(mini,arr[i]);
    }
   
}
int main()
{
    int n = 5;
    vector<int>v(n+1,-1);
    cout<<f(n,dp);
    vector<vector<int>>dp(n+1,vector<int>(n+1,INT_MAX));
  

  
return 0;
}