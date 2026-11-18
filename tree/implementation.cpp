#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left= right=NULL;
    }
};

void traversal(node* root) //preoder
{
    if(root==NULL)
        return ;
    cout<<root-> data<<endl;
    traversal(root->left);
    traversal(root->right);
}
int main()
{
    node* root=new node(3);
    root->left=new node(7);
    root->right=new node(9);
    root->left->left=new node(0);
    root->left->right=new node(5);
    traversal(root);
    return 0;
}