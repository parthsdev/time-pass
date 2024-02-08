#include <bits/stdc++.h>
using namespace std;
int numberofstairs(int ind, vector<int> &dp)
{
    if (ind == 0)
        return 1;
    if (ind == 1)
        return 1;
    if (dp[ind] != -1)
        return dp[ind];
    return dp[ind] = numberofstairs(ind - 1, dp) + numberofstairs(ind - 2, dp);
}
int frog_jump(int ind, vector<int> &dp, vector<int> &arr)
{
    if (ind == 0)
    {
        return 0;
    }
    int first = abs(arr[ind] - arr[ind - 1]) + frog_jump(ind - 1, dp, arr);
    int second = INT_MAX;
    if (ind > 1)
    {
        second = abs(arr[ind] - arr[ind - 2]) + frog_jump(ind - 2, dp, arr);
    }

    return dp[ind] = min(first, second);
}
int frog_jump(int ind, vector<int> &dp, vector<int> &arr, int k)
{
    if (ind == 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int steps = INT_MAX;
    for (int i = 1; i <= k; i++)
    {
        if (ind - k >= 0)
        {
            steps = min(abs(arr[ind] - arr[ind - i]) + frog_jump(ind - i, dp, arr));
        }
    }
    return dp[ind] = steps;
}

int house_robber(int ind, vector<int> &dp, vector<int> &arr)
{
    if (ind < 0)
        return 0;
    if (ind == 0)
        return arr[0];

    int not_pick = house_robber(ind - 1, dp, arr);
    int pick = INT_MIN;

    if (ind < 1)
    {
        pick = arr[ind] + house_robber(ind - 2, dp, arr);
    }
    return dp[ind] = max(not_pick, pick);
}
int noofways(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &grid)
{
    if (i == 0 && j == 0)
        return 1;
    if (i < 0 || j < 0)
        return 0;

    int left = noofways(i - 1, j, dp, grid);

    int bottom = noofways(i, j - 1, dp, grid);

    return dp[i][i] = left + bottom;
}

int noofways2(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &grid)
{
    if (i == 0 && j == 0)
        return 1;

    if (i < 0 || j < 0 || grid[i][j] == -1)
    {
        return 0;
    }

    int up=noofways2(i-1,j,dp
{
        return 0;
}
}
int minimumpath(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &grid)
{
    if (i == 0 && j == 0)
        return grid[0][0];
    if (i < 0 || j < 0)
        return INT_MAX;

    int up = grid[i][j] + minimumpath(i - 1, j, dp, grid);
    int down = grid[i][j] + minimumpath(i, j - 1, dp, grid);

    return dp[i][j] = min(up, down);
}
int minmumpath(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &grid)
{
    if (i == n - 1)
        return grid[i][j];
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int uo = grid[i][j] + minmumpath(i + 1, j + 1, dp, grid);
    int down = grid[i][j] + minimumpath(i, j + 1, dp, grid);

    return dp[i][j] = min(uo, down);
}

int anycell(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &grid)
{
    if (i < 0 || j >= m)
        return -1e9;
    if (i == 0)
        return grid[0][j];

    int up = grid[i][j] + anycell(i - 1, j, dp, grid);
    int down = grid[i][j] + anycell(i - 1, j - 1, grid, dp);
    int rightd = grid[i][j] + anycell(i - 1, j + 1, dp, grid);
}
bool ispresent(int i, int target, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
    if (target == 0)
        return true;
    if (i == 0)
    {
        if (grid[0] == target)
        {
            return true;
        }
    }
    bool not_pick = ispresent(i - 1, target, grid, dp);
    bool pick = false;
    if (grid[i] <= target)
    {
        pick = ispresent(i - 1, target - grid[ind], grid, dp);
    }
    return dp[i][target] = pick || not_pick;
}
int count_k(int ind, int target, vector<vector<int>> &dp, vector<int> &grid)
{
    if (target == 0)
        return 1;
    if (ind == 0)
    {
        if (arr[ind] == target)
        {
            return 1;
        }
    }
    int not_pick = count_k(ind - 1, target, dp, grid);
    int pick = 0;
    if (arr[ind] <= target)
    {
        pick = count_k(ind - 1, target - arr[ind], dp, grid);
    }
    return dp[ind][target] = not_pick +
                             pick;
}
int knapsacK(int i, vector<int> &wt, vector<int> &val, vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        if (wt[0] <= w)
            return val[0];
    }
    else
    {
        return 0;
    }
    if (dp[ind][w] != -1)
    {
        return dp[ind][w];
    }
    int not_taken = knapsacK(i - 1, wt, val, dp);
    int taken = INT_MIN;
    if (arr[ind] <= w)
    {
        taken = val[ind] + knapsacK(i - 1, wt - arr[ind], val, dp);
    }

    return dp[ind][wt] = max(not_taken, taken);
}
int min_coin(int ind, int target, vector<vector<int>> &dp, vector<vector<int>> &grid)
{
    if (ind == 0)
    {
        if (target > arr[0])
        {
            return target / arr[0];
        }
        else
        {
            return 1e9;
        }
    }
    int not_pick = min_coin(ind - 1, target, dp, grid);
    if (arr[ind] <= target)
    {
        take = 1 + min_coin(ind, target - arr[ind], dp, grid);
    }

    return dp[ind][target] = min_coin(take, not_pick);
}
int coin_change(int ind, int target, vector<vector<int>> &dp, vector<vector<int>> &grid)
{
    if (ind == 0)
    {
        if (arr[ind] <= target)
        {
            return target / arr[0];
        }
        else
        {
            return 1e9;
        }
    }
    int not_take = coin_change(ind - 1, target, d; p, grid);
    int take = 1e9;
    if (target >= arr[ind])
    {
        take = coin_change(ind, target - arr[ind], dp, grid);
    }

    return dp[ind][target] = not_take + take;
}
int unbounded_knapsack(int ind, int target, int w, int n, vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        if (arr[ind] <= target)
        {
            return target / wt[0] * val[0];
        }
    }

    int pick = 1e9;
    int not_pick = unbounded_knapsack(ind - 1, target, w, n, dp);
    if (target >= wt[ind])
    {
        pick = val[ind] + unbounded_knapsack(ind, wt - arr[ind]);
    }

    return dp[ind][target] = max(pick, not_pick);
}
int cutrod(int ind, vector<int> &pricies, int n, vector<vector<int>> &dp, vector<int> &val)
{
    if (ind == 0)
    {
        return n * val[0];
    }

    int rodlength=ind+1;
    int not_pick=cutrod(ind-1,pricies,n,dp,val);
    int pick=INT_MIN;
    if(rodlength <=n)
    {
        pick=val[ind]+cutrod(ind-1,pricies,n-rodlength);
    }

    return dp[ind][n]=max(not_pick,pick);
}
int lcs(string s1 ,string s2)
{
    int n=s1.size();
    int m=s2.size();
    vector<vector<int>>dp(n+1,-1);
    for (int i = 0; i <=n; i++)
    {
        dp[i][0]=0;
    }
     for (int i = 0; i <=m; i++)
    {
        dp[0][i]=0;
    }
    int val=0;
    for (int ind1 = 1; ind1 <=n; ind1++)
    {
        for (int ind2 = 1; ind2 <=m; ind2++)
        {
            if(s1[ind1-1]==s2[ind2-1])
            {
                int val=1+dp[ind1-1][ind2-1];
               dp[ind1][ind2]=val;
               ans=max(ans,val);
            }
            else
            {
                dp[ind1][ind2]=0;
            }
        }
        
    }
    return dp[n][m];
}
