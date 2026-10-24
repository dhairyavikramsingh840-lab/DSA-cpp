#include <bits/stdc++.h>
using namespace std;

int tab(string s, string t)
{
    int n = s.length();
    int m = t.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 0; i < m + 1; i++)
    {
        dp[0][i] = i;
    }

    for (int i = 0; i < n + 1; i++)
    {
        dp[i][0] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i - 1] == t[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 1 + min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]);
            }
        }
    }
    return dp[n][m];
}
int main()
{
    string s = "initiation";
    string t = "execution";
    cout <<  tab(s, t) << endl;
    return 0;
}