#include <bits/stdc++.h>
using namespace std;

int LastOccurence(vector<int> arr, int i, int target)
{
  if (i < 0)
  {
    return -1;
  }

  if (arr[i] == target)
  {
    return i;
  }

  return LastOccurence(arr, i - 1, target);
}
int main()
{

  vector<int> arr = {1, 2, 3, 3, 3, 5, 6};
  cout << LastOccurence(arr, arr.size() - 1, 3);

  return 0;
}