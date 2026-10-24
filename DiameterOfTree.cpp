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

int diameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int currentdiameter = height(root->left) + height(root->right) + 1;

    int leftdiameter = diameter(root->left);

    int rightdiameter = diameter(root->right);

    return max(currentdiameter, max(leftdiameter, rightdiameter));
}

pair<int, int> diameter2(Node* root) {
    if (root == NULL) {
        return make_pair(0, 0);   // (diameter, height)
    }

    pair<int, int> leftInfo = diameter2(root->left);
    pair<int, int> rightInfo = diameter2(root->right);

    // current diameter = LH + RH + 1
    int currDiam = leftInfo.second + rightInfo.second + 1;

    // best diameter among (current, left diameter, right diameter)
    int finalDiam = max(currDiam, max(leftInfo.first, rightInfo.first));

    // height = max(LH, RH) + 1
    int finalHeight = max(leftInfo.second, rightInfo.second) + 1;

    return make_pair(finalDiam, finalHeight);
}


int main()


{
    vector<int> tree = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = BuildTree(tree);
    cout << "root is : " << root->data << endl;

    cout << "Diameter is : " << diameter2(root).first<< endl;
   

    cout << "height is : "<< diameter2(root).second;
    return 0;
}