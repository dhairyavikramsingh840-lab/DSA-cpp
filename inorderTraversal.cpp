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
void postorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    vector<int> tree = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BuildTree(tree);
    cout << "root is : " << root->data << endl;

    postorderTraversal(root);
    return 0;
}