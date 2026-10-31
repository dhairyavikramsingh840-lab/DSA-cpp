#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool dfs(int src, vector<bool> &vis, int par, vector<vector<int>> &adj)
    {
        vis[src] = true;

        for (auto v : adj[src])
        {
            if (!vis[v])
            {
                if (dfs(v, vis, src, adj))
                    return true;
            }
            else
            {
                if (v != par)
                    return true;
            }
        }
        return false;
    }

    bool isCycle(vector<vector<int>> &adj)
    {
        int n = adj.size();
        vector<bool> vis(n, false);

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                if (dfs(i, vis, -1, adj))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    int V = 3;
    vector<vector<int>> adj(V);

    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[2].push_back(0);
    adj[0].push_back(2);

    Solution obj;
    if (obj.isCycle(adj))
    {
        cout << "Cycle Present in graph" << endl;
    }
    else
    {
        cout << "No Cycle in this Graph" << endl;
    }

    return 0;
}