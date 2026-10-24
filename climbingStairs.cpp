#include <bits/stdc++.h>
using namespace std;

int tab(int n)
{
    vector<int> dp(n + 1);

    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    for (int i = 3; i <= n+1; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    return dp[n-1];
}

int main()
{
    int n = 6;
   cout << tab(n) << endl;
   return 0;
}