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

int NodeCount(Node* root){
    if(root==NULL){
        return 0;
    }

    int Leftcnt  = NodeCount(root->left);
     int rightcnt  = NodeCount(root->right);
 
     return Leftcnt+rightcnt+1;

}

int main()
{
    vector<int> tree = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BuildTree(tree);
    cout << "root is : " << root->data << endl;

     cout << "count is : "<<NodeCount(root);
    return 0;
}