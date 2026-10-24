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

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftheight = height(root->left);
    int rightHeight = height(root->right);
    

    int currentheight = max(leftheight, rightHeight) + 1;

    return currentheight;
}

bool isidentical(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    else if (root1 == NULL || root2 == NULL)
    {
        return false;
    }

    if (root1->data == root2->data)
    {
        return isidentical(root1->left, root2->right) && isidentical(root1->right, root2->right);
    }
}
bool isSubtree(Node *root, Node *newnode)
{
    if (root == NULL && newnode == NULL)
    {
        return true;
    }
    else if (root == NULL || newnode == NULL)
    {
        return false;
    }

    if (root->data == newnode->data)
    {
        if (isidentical(root, newnode))
        {
            return true;
        }
    }

    int isSubroot = isSubtree(root->left, newnode);
    if (!isSubroot)
    {
        return isSubtree(root->right, newnode);
    }
}

int main()
{
    vector<int> tree = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BuildTree(tree);
    cout << "root is : " << root->data << endl;

    Node *newnode = new Node(2);
    newnode->left = new Node(4);
    // newnode->right = new Node(5);

    cout << isSubtree(root, newnode);

    return 0;
}
