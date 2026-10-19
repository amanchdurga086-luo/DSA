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
    for(int i=1; i< 7; i++)
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
node *oddEven(node* head)
{
    node* evenHead=head->next;
    node* even=evenHead;
    node* odd=head;
    if(head==NULL || head->next==NULL) return head;
    while(even !=NULL && even->next!=NULL)   // check even because in one loop even always ahead of odd
    {
        odd->next=odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next;
    }
    odd->next=evenHead;
    return head;
}
int main()
{
    int arr[]={10,5,3,90,2,4,15};
    node * head = arrToLL(arr);
    toPrint(head);
    cout<<endl;
    head=oddEven(head);
    toPrint(head);
    
    return 0;
}