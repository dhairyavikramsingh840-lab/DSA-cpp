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

Node *Buildtree(vector<int> node)
{
    i++;
    if (node[i] == -1)
    {
        return NULL;
    }

    Node *root = new Node(node[i]);

    root->left = Buildtree(node);
    root->right = Buildtree(node);

    return root;
}

bool rootToPath(Node *root, int n, vector<int> &path)
{
    if(root==NULL){
        return false;
    }
    
}

int LCA(Node *root, int n1, int n2)
{
    vector<int> path1;
    vector<int> path2;

    rootToPath(root, n1, path1);
    rootToPath(root, n2, path2);
    int lca = -1;
    for (int i = 0, j = 0; i < path1.size(), j < path2.size(); i++, j++)
    {
        if (path1[i] != path2[j])
        {
            return -1;
        }
        lca = path1[i];
    }


}

int main()
{

    vector<int> tree = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = Buildtree(tree);
    cout << "root is " << root->data;
}