#include <bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int> &arr, int sum)
{

    int n = arr.size();
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
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
    return dp[n][sum] == sum;
} 

int main()
{
    vector<int> num = {4, 2, 7, 1, 3};
    int n = num.size();
    int target = 10;

    cout << isSubsetSum(num, target) << endl;
    return 0;
}