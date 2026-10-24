#include <bits/stdc++.h>
using namespace std;

void nextGreater(vector<int> arr, vector<int> ans)
{
    stack<int> s;

    int idx = arr.size() - 1;
    ans[idx] = -1;
    s.push(arr[idx]);

    for (idx = arr.size() - 2; idx >= 0; idx--)
    {
        int current = arr[idx];
        while (!s.empty() && current >= s.top())
        {
            s.pop();
        }
        if (s.empty())
        {
            ans[idx] = -1;
        }
        else
        {
            ans[idx] = s.top();
        }
        s.push(current);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans = {0, 0, 0, 0, 0};

    nextGreater(arr, ans);
    return 0;
}