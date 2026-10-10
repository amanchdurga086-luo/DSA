#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* back;

    node(int d)
    {
        data=d;
        next=NULL;
        back=NULL;
    }
    node(int d, node* n, node* b)
    {
        data=d;
        next=n;
        back=b;
    }  
};


node* ArrTODLL(int arr[])
{
    node* head= new node(arr[0]);
    node* prev=head;
    for(int i=1; i<4; i++)
    {
        node* temp=new node(arr[i], NULL, prev);
        prev->next =temp;
        prev=temp;
    }
    return head;
}

void print(node* head)
{
    node* temp=head;
    cout<<"forward traversal"<<endl;

    cout<<temp->data<<" ";
    while(temp->next)
    {
        temp=temp->next;
        cout<<temp->data<<" ";

    }
    cout<<endl<<"back traversal"<<endl;
    cout<<temp->data<<" ";
    while(temp->back)
    {
        temp=temp->back;
        cout<<temp->data<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={22,55,11,99};
    node*head=ArrTODLL(arr);
    print(head);
    return 0;
}