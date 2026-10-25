#include <bits/stdc++.h>
using namespace std;

// Recursive function to compute the nth Catalan number
int catRec(int n)
{
    if (n == 0 || n == 1)
        return 1;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += catRec(i) * catRec(n - i - 1);
    }
    return ans;
}

int catMem(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
        return 1;

    if (dp[n] != -1)
        return dp[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += catMem(i, dp) * catMem(n - i - 1, dp);
    }
    return dp[n] = ans;
}

int catTab(int n)
{
    vector<int> dp(n + 1);

    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        int ans = 0;
        for (int j = 0; j < i; j++)
        {
            ans += dp[j] * dp[i - j - 1];
        }
        dp[i] = ans;
    }

    return dp[n];
}
int main()
{
    int n = 10;
    vector<int> dp(n + 1, -1);
    for (int i = 0; i <= n; i++)
    {
        cout << catTab(i) << " ";
    }
    cout << endl;
    return 0;
}