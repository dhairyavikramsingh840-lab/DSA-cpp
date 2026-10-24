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

Node* Buildtree(vector<int> node){
    i++;
    if(node[i]==-1){
        return NULL;
    }

    Node* root  =  new Node(node[i]);

    root-> left  = Buildtree(node);
    root->right  = Buildtree(node);

    return root;
    
}
int main()
{

    vector<int> tree = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = Buildtree(tree);
    cout<< "root is "<< root->data;

}