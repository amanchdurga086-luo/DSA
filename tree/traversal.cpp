#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};

static int idx=-1;
node* buildTree(vector<int> &preorder)
{
    idx++;
    if(preorder[idx]==-1) return NULL;

    node* root= new node(preorder[idx]);
    root->left= buildTree(preorder);
    root->right= buildTree(preorder);
    return root;
}

void preTraversal(node* root)
{
    if(root==NULL) return;

    cout<<root->data<< " ";
    preTraversal(root->left);
    preTraversal(root->right);
}

// void levelOrderTraversal(node* root)
// {
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty())
//     {
//         node* curr=q.front();
//         q.pop();

//         if(curr==NULL)
//         {
//             if(!q.empty())
//             {
//                 cout<<endl;
//                 q.push(NULL);
//                 continue;
//             }
//             else
//                 break;
//         }
//         cout<<curr->data<<" ";

//         if(curr->left) q.push(curr->left);
//         if(curr->right) q.push(curr->right);
//     }
// }

void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);

    cout<<"["<<endl;
    while(!q.empty())
    {
        cout<<"[";
        int k=q.size();
        while(k>0)
        {
            node* curr=q.front();
            q.pop();

            cout<<curr->data<<" ";

            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
            k--;
        }
        cout<<"]";
        cout<<endl;
    }
    cout<<"]";
}

int main()
{
    vector<int> preorder={1,2,-1,-1, 3,4,-1,-1,5,-1,-1};

    node* root= buildTree(preorder);
    cout<<"preorder: ";
    preTraversal(root);

    cout<<endl;
    cout<<"level order: "<<endl;
    levelOrderTraversal(root);
    return 0;
}