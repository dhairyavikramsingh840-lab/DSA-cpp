#include<bits/stdc++.h>
using namespace std;

int rec(vector<int> val, vector<int> wt, int w, int n)
{
    if (n == 0 || w == 0)
        return 0;

    int itemWt = wt[n - 1];
    int itemVal = val[n - 1];

    if (itemWt <= w)
    {
        int ans1 = rec(val, wt, w - itemWt, n - 1) + itemVal;

        int ans2 = rec(val, wt, w, n - 1);
        return max(ans1, ans2);
    }
    else
    {
        return rec(val, wt, w, n - 1);
    }
}

int mem(vector<int> val, vector<int> wt, int w, int n, vector<vector<int>> &dp)
{
    if (n == 0 || w == 0)
        return 0;

    if (dp[n][w] != -1)
        return dp[n][w];
    int itemWt = wt[n - 1];
    int itemVal = val[n - 1];

    if (itemWt <= w)
    {
        int ans1 = mem(val, wt, w - itemWt, n - 1, dp) + itemVal;

        int ans2 = mem(val, wt, w, n - 1, dp);
        dp[n][w] = max(ans1, ans2);
    }
    else
    {
        dp[n][w] = mem(val, wt, w, n - 1, dp);
    }

    return dp[n][w];
}

int tab(vector<int> val, vector<int> wt, int w, int n)
{
    vector<vector<int>> dp(n+1, vector<int> (w+1, 0));

    for(int i = 1; i <= n; i++){
        for(int  j = 1;  j <= w; j++){
            int itemWt = wt[i-1];
            int itemVal = val[i-1];

            if(itemWt <= j){
                dp[i][j] = max(itemVal + dp[i-1][j-itemWt], dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp[n][w];
}
int main()
{
    vector<int> val = {15, 14, 10, 45, 30};
    vector<int> wt = {2, 5, 1, 3, 4};

    int w = 7;
    int n = 5;

    vector<vector<int>> dp(n + 1, vector<int>(w + 1, -1));
    cout << tab(val, wt, w, n) << endl;
    return 0;
}