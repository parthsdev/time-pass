#include <bits/stdc++.h>
using namespace std;
void bfs(int n, vector<int> adj[])
{
    vector<int> bfs;
    vector<int> vis(n + 1, 0);

    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vis[i] = 1;
            q.push(i);
            while (!q.empty())
            {
                int node = q.front();
                q.pop();

                for (auto it : adj[node])
                {
                    if (!vis[it])
                    {
                        vis[it] = 1;
                        q.push(it);
                    }
                }
            }
        }
    }
}

void dfs(int node, vector<int> &vis, vector<int> adj[], int n)
{
    vis[node] = 1;
    dfs.push_back(node);

    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            q.push(it);
            vis[it] = 1;
        }
    }
}

void dfs_call(int n, vector<int> adj[])
{
    vector<int> dfs;
    vector<int> vis(n + 1, false);

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, )
        }
    }
}
bool cycle_detect(int node, int parent, vector<int> &vis, vector<int> adj[])
{

    vis[node]=1;
    for(auto it:adj[node])
    {
        if(vis[it]==0)
        {
            if(cycle_detect(it,node,vis,adj))
            {
                return true;
            }
            else if(it!=parent)
            [
                return true;
            ]
        }
    }
    
}
bool iscycle(int n, vector<int> adj[])
{
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            if (cycle_detect(i, -1, vis, adj))
            {
                return true;
            }
        }
    }
    return false;
}
bool directed(int node , vector<int>adj[])
{
    vis[node]=1;
    dfs_vis[node]=1;
    for(auto it:adj[node])
    {
        if(!vis[it])
        {
            if(directed(it,adj))
            {
                return true;
            }
        }
        else if(dfs_vis[it]==1)
        {
            return true;
        }
    }

    dfs_vis[node]=0;
    return false;
}
bool directed_cycle(int node , vector<int>adj[])
{
      vector<int>vis(n+1,0);
      vector<int>dfs_vis(n+1,0);
      for (int i = 0; i < n; i++)
      {
        if(!vis[i])
        {
            if(directed(i,))
        }
      }
      
}

vector<int>topo(int n , vector<int>adj[])
{
    vector<int>vis(n+1,0);
    vector<int>indegree(n+1,0);

    for (int i = 0; i < n; i++)
    {
       for(auto it:adj[i])
       {
         indegree[it]++;
       }
        
    }
    for (int i = 0; i < n; i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }
    vector<int>topo;
    while (!q.empty())
    {
        int node = q.front();q.pop();
        topo.push_back(node);
       for(auto it:adj[node])
       {
        indegree[it]--;
        if(indegree[it]==0)
        {
            q.push(it);
        }
       }
        
    }
    
    return topo;
}
void bfs(int n, vector<int>adj[],int src)
{
    queue<int>q;
    vector<int>dis(n+1,INT_MAX);
    dis[src]=0;

    q.push(src);
    while (!q.empty())
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

    int n, m;
    std::cin >> n >> m;
    vector<pair<int, int>> adj[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        std::cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }
    int source;cin>>source;


    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>dis(n+1,INT_MAX);

    dis[sourse]=0;

    pq.push({0,sourse})
    
    while (!pq.empty())
    {
        int distance=pq.top().first;
        int prev=pq.top().second;
        pq.pop();
        for(auto it:adj[prev])
        {
            int next_dis=it.second;
            int node=it.first;
            if(dis[next_dis]>dis[prev]+next_dis)
            {
                dis[next_dis]=dis[prev]+next_dis;
                pq.push({dis[next_dis],node})l
            }
        }
    }
    
    

    return 0;
}