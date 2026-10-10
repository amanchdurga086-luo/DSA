#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};

node* arrToLL(int arr[])
{
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1; i< 4; i++)
    {
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void toPrint(node* head)
{
    node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

bool tosearch(node* head, int key)
{
    node* temp=head;
    while(temp)
    {
        if(temp->data==key) return true;
        temp=temp->next;
    }
    return false;
}
int main()
{
    int arr[]={100,2,4,15};
    // node* y=new node(32);
    // cout<<y->data;
    node * head = arrToLL(arr);
    // cout<<head->data;
    toPrint(head);
    cout<<endl;
    cout<<tosearch(head, 100);

    return 0;
}