#include<iostream>
#include<vector>
#include<algorithm>
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
    for(int i=1; i< 12; i++)
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
node* sortLL(node* head)
{
    if(head==NULL && head->next==NULL) return head;
    node* zeroHead= new node(-1);
    node* zero=zeroHead;
    node* oneHead= new node(-1);
    node* one=oneHead;
    node* twoHead= new node(-1);
    node* two=twoHead;
    node* temp =head;
    while(temp != NULL)
    {
        if(temp->data==0)
        {
            zero->next=temp;
            zero= zero->next;
        }
        else if(temp->data==1)
        {
            one->next=temp;
            one= one->next;
        }
        else
        {
            two->next=temp;
            two=two->next;
        }
        temp=temp->next;
    }

    head=zeroHead->next;
    zero->next=oneHead->next;
    one->next=twoHead->next;
    two->next=NULL;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;   
}
int main()
{
    int arr[]={2,0,2,1,1,1,0,2,2,1,0,2};
    node * head = arrToLL(arr);
    toPrint(head);
    cout<<endl;
    head=sortLL(head);
    toPrint(head);
    
    return 0;
}