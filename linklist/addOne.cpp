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
    for(int i=1; i< 5; i++)
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

// add one at end of ll
int helper(node* head)
{
    if(head==NULL)
        return 1;
    
    int carry= helper(head->next);
    head->data=head->data+carry;
    if(head->data< 10)
    {
        return 0;
    }
    head->data=0;
    return 1;
}
node* addONe(node* head)
{
    int carry=helper(head);
    if(carry)
    {
        node* temp= new node(1);
        temp->next=head;
        return temp;   
    }
    return head;
}
int main()
{
    int arr[]={9,9,9,9,9};
    node * head = arrToLL(arr);
    toPrint(head);
    cout<<endl;
    head=addONe(head);
    toPrint(head);
    
    return 0;
}