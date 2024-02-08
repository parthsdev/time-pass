#include <bits/stdc++.h>
using namespace std;
void bfs(int n, vector<int> adj[], vector<int> &vis)
{
    vector<int> bfs;
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            q.push(i);
            vis[i] = 1;
            while (!q.empty())
            {
                int node = q.front();
                bfs.push_back(node);
                q.pop();

                for (auto it : adj[node])
                {
                    if (vis[it] == 0)
                    {
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
        }
    }
}
void dfs_vis(int node, vector<int> &vis, vector<int> &dfs, vector<int> adj[])
{
    vis[node] = 1;
    dfs.push_back(node);
    for (auto it : adj[node])
    {
        if (vis[it] == 0)
        {
            dfs_vis(it, vis, dfs, adj);
        }
    }
}
void dfs(int node, int n)
{
    vector<int> vis(n + 1, -1);
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            dfs_vis(i, vis, dfs, adj);
        }
    }
}
bool dfs_cycle(int node, int parent, vector<int> adj[], vector<int> &vis)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (vis[it] == 0)
        {
            if (dfs_cycle(it, parent, adj, vis))
                return true;
        }
        else if (it != parent)
        {
            return true;
        }
    }
    return false;
}
bool dfs(int n, vector<int> adj[])
{
    for (int i = 1; i <= n; i++)
    {
        if (dfs_cycle(i, -1, adj, n))
        {
            return true;
        }
    }
    return false;
}
bool directed_cycle(int node, vector<int> adj[], vector<int> &vis, vector<int> &dfs_vis)
{
    vis[node] = 1;
    dfs_vis[node] = 1;
    for (auto it : adj[node])
    {
        if (vis[it] == 0)
        {
            if (directed_cycle(it, adj, vis, dfs_vis))
            {
                return true;
            }
        }
        else if (dfs_vis[it] == 1)
        {
            return true;
        }
    }
    dfs_vis[node] = 0;
    return false;
}
vector<int> toposort(int n, vector<int> adj[])
{
    queue<int> q;
    vector<int> topo(n + 1, 0);
    vector<int> indegree(n, 0);
    vector<int> vis(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        for (auto it : adj[i])
        {
            indegree[it]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    vector<int> topo;
    while (!q.empty())
    {
        int node = q.front();
        topo.push_back(node);
        q.pop();
        for (auto it : adj[node])
        {
            indegree[it]--;
            if (indegree[it] == 0)
            {
                q.push(it);
            }
        }
    }
}
void bfs(int n,vector<int>adj[],int src)
{
    vector<int>dis(n+1,1e9);
    dis[src]=0;
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        int node = q.front();q.pop();
        for(auto it:adj[node])
        {
            if(dis[node]+1<dis[it])
            {
                dis[it]=dis[node]+1;
                q.push(it);
            }
        }

    }

}
int main()
{
    return 0;
}