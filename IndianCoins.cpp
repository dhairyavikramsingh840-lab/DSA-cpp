#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> coins, int n)
{

  int ans = 0;

  for (int i = coins.size() - 1; i >= 0 && n > 0; i--)
  {
    if (n >= coins[i])
    {
      ans += n / coins[i];
      n = n % coins[i];
    }
  }
  return ans;
}
int main()
{
  vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
  cout << findMin(coins, 599);
  return 0;
}