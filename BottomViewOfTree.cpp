#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node* BuildTree(vector<int> nodes) {
    idx++;
    if (nodes[idx] == -1) return NULL;

    Node* root = new Node(nodes[idx]);
    root->left = BuildTree(nodes);
    root->right = BuildTree(nodes);
    return root;
}

void BottomView(Node* root) {
    if (!root) return;

    queue<pair<Node*, int>> q;
    map<int, int> m; // horizontal distance → last seen node

    q.push({root, 0});

    while (!q.empty()) {
        auto curr = q.front();
        q.pop();

        Node* node = curr.first;
        int hd = curr.second;

        // Top view → only insert once
        // Bottom view → overwrite every time
        m[hd] = node->data;

        if (node->left)
            q.push({node->left, hd - 1});

        if (node->right)
            q.push({node->right, hd + 1});
    }

    for (auto it : m) {
        cout << it.second << " ";
    }
    cout << endl;
}

int main() {
    vector<int> tree = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = BuildTree(tree);

    cout << "Root is: " << root->data << endl;
    cout << "Bottom View: ";
    BottomView(root);

    return 0;
}
