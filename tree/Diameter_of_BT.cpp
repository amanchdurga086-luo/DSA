#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Diameter of the binary tree

class treenode
{
    public:
    int data;
    treenode* left;
    treenode* right;

    treenode(int val)
    {
        data=val;
        left=right=NULL;
    }
};

static int idx=-1;
treenode* buildTree(vector<int> &preorder)
{
    idx++;
    if(preorder[idx]==-1) return NULL;

    treenode* root= new treenode(preorder[idx]);
    root->left= buildTree(preorder);
    root->right= buildTree(preorder);
    return root;
}


// Diameter of the binary tree
int longestLen(treenode * root, int &ans)
{
    if(!root) return 0;

    int leftLen=longestLen(root->left, ans);
    int rightLen=longestLen(root->right, ans);

    ans=max(ans, leftLen+rightLen);

    return max(leftLen, rightLen) +1;
}

int main()
{
    vector<int> preorder={1,2,-1,-1, 3,4,-1,-1,5,-1,-1};

    treenode* root= buildTree(preorder);
    int diameter=0;
    longestLen(root, diameter);
    cout << "Diameter of the binary tree: " << diameter << endl;
    return 0;
}