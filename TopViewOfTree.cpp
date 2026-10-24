#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

static int i = -1;
Node *BuildTree(vector<int> nodes)
{
    i++;

    if (nodes[i] == -1)
    {
        return NULL;
    }

    Node *currentNode = new Node(nodes[i]);

    currentNode->left = BuildTree(nodes);
    currentNode->right = BuildTree(nodes);

    return currentNode;
}

void TopView(Node *root)
{

    queue<pair<Node *, int>> q;
    map<int, int> m;

    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node *, int> curr = q.front();
        q.pop();
        Node *currNode = curr.first;
        int currHD = curr.second;

        if (m.count(currHD) == 0)
        {
            m[currHD] = currNode->data;
        }
        if (currNode->left != NULL)
        {
            pair<Node *, int> left = make_pair(currNode->left, currHD - 1);
            q.push(left);
        }
        if (currNode->right != NULL)
        {
            pair<Node *, int> right = make_pair(currNode->right, currHD + 1);
            q.push(right);
        }
    }
    for (auto it : m)
    {
        cout << it.second << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> tree = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BuildTree(tree);
    cout << "root is : " << root->data << endl;
    TopView(root);

    return 0;
}
