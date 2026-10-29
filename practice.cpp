#include<bits/stdc++.h>
using namespace std;

class SegmentTree {
    vector<int> tree;
    int n;

public:
    SegmentTree(vector<int> nums){
        n = nums.size();
        tree.resize(4*n);
        buildTree(nums, 0, n-1, 0);
    }
    void buildTree(vector<int> &nums, int st, int end, int node){

        if(st == end){
            tree[node] = nums[st];
            return;
        }
        int mid = st + (end- st) / 2;

        buildTree(nums, st, mid, 2*node+1);
        buildTree(nums, mid+1, end, 2*node+2);

        tree[node] = max(tree[2*node+1], tree[2*node+2]);
    }
    void print(){
        for(auto it : tree){
            cout << it << " ";
        }
        cout << endl;
    }
};
int main()
{
    vector<int> arr = {6, 8, -1, 2, 17, 1, 3, 2, 4};

    SegmentTree st(arr);
    st.print();
    return 0;
}