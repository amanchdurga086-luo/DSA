#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class circuralQue
{
    int *arr;
    int f, r;
    int cap, currentSize;
    public:
    circuralQue(int size)
    {
        cap=size;
        arr=new int[cap];
        f=0;
        r=-1;
        currentSize=0;
    }
    void push(int val)
    {
        if(currentSize==cap)
        {
            cout<<"list is full";
            return;
        }
        r=(r+1)%cap;
        arr[r]=val;
        currentSize++;
    }
    void pop()
    {
        if(empty())
        {
            cout<<"que is empty"<<endl;
            return ;
        }
        f=(f+1)%cap;
        currentSize--;
    }
    int front()
    {
        if(empty())
        {
            cout<<"que is empty"<<endl;
            return -1;
        }
        return arr[f];

    }
    bool empty()
    {
        return currentSize==0;
    }
};
int main()
{
    circuralQue que(3);
    que.push(1);
    que.push(2);
    que.push(3);
    que.pop();
    que.pop();
    que.push(4);
    que.push(3);


    while(!que.empty())
    {
        cout<<que.front();
        que.pop();
    }

    return 0;
}