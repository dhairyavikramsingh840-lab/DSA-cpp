#include <bits/stdc++.h>
using namespace std;

class SegmentTree
{
    vector<int> tree;
    int n;

public:
    SegmentTree(vector<int> &arr)
    {
        n = arr.size();
        tree.resize(4 * n);
        buildTree(arr, 0, n - 1, 0);
    }

    void buildTree(vector<int> &arr, int st, int end, int node)
    {
        if (st == end)
        {
            tree[node] = arr[st];
            return;
        }
        int mid = st + (end - st) / 2;
        buildTree(arr, st, mid, 2 * node + 1);
        buildTree(arr, mid + 1, end, 2 * node + 2);

        tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
    }
    int rangeSum(int q, int j, int s, int t, int node)
    {
        if (j < s || q > t)
            return 0;

        else if (s >= q && t <= j)
        {
            return tree[node];
        }
        else
        {
            int mid = s + (t - s) / 2;
            return rangeSum(q, j, s, mid, 2 * node + 1) + rangeSum(q, j, mid + 1, t, 2 * node + 2);
        }
    }
    int rangeQuery(int q, int j)
    {
        return rangeSum(q, j, 0, n - 1, 0);
    }
    void updateHelper(int idx, int newVal, int st, int end, int node){
        if(st == end){
            tree[node] = newVal;
            return;
        }
        int mid = st + (end - st) / 2;

        if(idx >= st && idx <= mid){
            //left
            updateHelper(idx, newVal, st, mid, 2*node+1);
        }else{
            //right
            updateHelper(idx, newVal, mid+1, end, 2*node+2);
        }

        tree[node] = tree[2*node+1] + tree[2*node+2];
    }
    void updateQuery(int idx, int newVal){
        updateHelper(idx, newVal, 0, n-1, 0);
    }
    void printTree()
    {
        for (int i = 0; i < tree.size(); i++)
        {
            cout << tree[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

    SegmentTree st(arr);
    cout << st.rangeQuery(0, 5) << endl;
    cout << st.rangeQuery(0, 3) << endl;
    cout << st.rangeQuery(6, 7) << endl;

    st.updateQuery(1, 3);
    cout << st.rangeQuery(0, 3) << endl;

    return 0;
}