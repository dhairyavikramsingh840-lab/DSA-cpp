#include <bits/stdc++.h>
using namespace std;

vector<int> PairSum(vector<int> arr, int target)
{

    int start = 0;
    int end = arr.size() - 1;
    vector<int> ans;
    while (start < end)
    {
        int currentsum = arr[start] + arr[end];
        if (currentsum == target)
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if (currentsum > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {2, 7, 13, 15};
    int target = 9;
    vector<int> ans = PairSum(arr, target);

    cout << ans[0] << "," << ans[1] << endl;
}