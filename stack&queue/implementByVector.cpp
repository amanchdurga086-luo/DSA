#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class stack
{
    vector<int> v;
    public:
        void push(int val)
        {
            v.push_back(val);
        }
        void pop()
        {
            v.pop_back();
        }
        bool empty()
        {
            return v.size()==0;
        }
        int top()
        {
            return v[v.size()-1];
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