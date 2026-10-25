#include <bits/stdc++.h>
using namespace std;

int mini(vector<int> arr)
{
    int n = arr.size();
    int totalSum = 0;
    for (auto it : arr)
        totalSum += it;

    int w = totalSum / 2;
    vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = max(arr[i - 1] + dp[i - 1][j - arr[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    int g1 = dp[n][w];
    int g2 = totalSum - g1;

    return abs(g1 - g2);
}
int main()
{
    vector<int> arr = {1, 6, 11, 5};
    cout << mini(arr);

    return 0;
}