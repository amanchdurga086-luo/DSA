#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int d)
    {
        data=d;
        next=NULL;
    }

    node(int d, node* n)
    {
        data=d;
        next=n;
    }
    
};

node* deleteHead(node* head)
{
    if(head==NULL) return head;
    node * temp=head;
    head=head->next;
    delete temp;
    return head;
}

node* ArrTOlist(int arr[])
{
    node* head= new node(arr[0]);
    node* mover=head;
    for(int i=1; i<4; i++)
    {
        node* temp=new node(arr[i]);
        mover->next =temp;
        mover=temp;
    }
    return head;
}
void print(node* head)
{
    node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* removeKey(int key, node* head)
{
    if(head==NULL) return head;
    node* pre=NULL;
    node* mover=head;
    while(mover->data !=key && mover->next!=NULL)
    {
        pre=mover;
        mover=mover->next;

    }
    if(mover->data==key)
    {
        // pre->next=mover->next;
        pre->next = pre->next->next;
        delete mover;
    }
    else cout<<key<<" DNE"<<endl;

    return head;
}
int main()
{
    int arr[]={22,55,11,99};
    node*head=ArrTOlist(arr);
    print(head);
    // head= deleteHead(head);
    head =removeKey(11, head);
    head =removeKey(98, head);
    head =removeKey(99, head);
    print(head);
    return 0;
}