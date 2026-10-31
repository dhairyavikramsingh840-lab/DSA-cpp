#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    bool dfs(int src, vector<bool> &vis, vector<bool> &rec, vector<vector<int>> &adj) {
        vis[src] = true;
        rec[src] = true;
        
        for (auto v : adj[src]) {
            if (!vis[v]) {
                if (dfs(v, vis, rec, adj))
                    return true;
            }
            else if (rec[v]) {
                return true;
            }
        }
        
        rec[src] = false;
        return false;
    }
    
    bool isCyclic(vector<vector<int>> &adj) {
        int n = adj.size();
        vector<bool> vis(n, false);
        vector<bool> rec(n, false);
        
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                if (dfs(i, vis, rec, adj)) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    int V = 3;
    vector<vector<int>> adj(V);

    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(0);

    Solution obj;
    if(obj.isCyclic(adj)) {
        cout << "There is a Cycle" << endl;
    } else {
        cout << "There is no Cycle" << endl;
    }

    return 0;
}