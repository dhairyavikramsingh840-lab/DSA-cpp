#include <bits/stdc++.h>
using namespace std;

class SegmentTree
{
    vector<int> tree;
    int n;

public:
    SegmentTree(vector<int> nums)
    {
        n = nums.size();
        tree.resize(4 * n);
        if (n > 0)
        {
            buildTree(nums, 0, n - 1, 0);
        }
    }
    void buildTree(vector<int> &nums, int st, int end, int node)
    {

        if (st == end)
        {
            tree[node] = nums[st];
            return;
        }
        int mid = st + (end - st) / 2;

        buildTree(nums, st, mid, 2 * node + 1);
        buildTree(nums, mid + 1, end, 2 * node + 2);

        tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
    }
    int rangeMax(int qi, int qj, int si, int sj, int node)
    {
        if (qi > sj || qj < si)
        {
            return INT_MIN;
        }
        else if (si >= qi && sj <= qj)
        {
            return tree[node];
        }
        else
        {
            int mid = si + (sj - si) / 2;

            int leftMax = rangeMax(qi, qj, si, mid, 2 * node + 1);
            int rightMax = rangeMax(qi, qj, mid + 1, sj, 2 * node + 2);

            return max(leftMax, rightMax);
        }
    }
    int rangeQueries(int qi, int qj)
    {
      return  rangeMax(qi, qj, 0, n - 1, 0);
    }
    void print()
    {
        for (auto it : tree)
        {
            cout << it << " ";
        }
        cout << endl;
    }
};
int main()
{
    vector<int> arr = {6, 8, -1, 2, 17, 1, 3, 2, 4};

    SegmentTree st(arr);
    cout << st.rangeQueries(5, 8) << endl;
    return 0;
}