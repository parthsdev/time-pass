#include<bits/stdc++.h>
using namespace std;
bool is_valid(int i , int j , vector<vector<int>>&grid)
{
    if(i>=0 && j>=0 && grid[i][j]=='1' )
    {
        return true;
    }

    return false;
}

void dfs_call(int i , int j , vector<vector<int>>&grid)
{
    grid[i][j]='0';

}
int main()
{
    int n = grid.size();
    int m =grid[0].size();

    int count=0;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            if(grid[i][j]=='1')
            {
                dfs_call(i,j,grid);
                count++:
            }
        }
        
    }
    
return 0;
}