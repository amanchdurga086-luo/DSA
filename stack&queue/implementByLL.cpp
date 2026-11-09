#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

class stack
{
    list<int> ll;
    public:
        void push(int val)
        {
            ll.push_front(val);
        }
        void pop()
        {
            ll.pop_front();
        }
        bool empty()
        {
            return ll.size()==0;
        }
        int top()
        {
            return ll.front();
        }
};

int main()
{
    stack s;
    s.push(45);
    s.push(54);
    s.push(99);
    s.push(90);

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}