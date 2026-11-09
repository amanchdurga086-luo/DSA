#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

// nextGratestElement

vector<int> nextGratestElement(vector<int > & arr)
{
    stack<int> sk;    //greatest element
    vector<int> nge(arr.size(),0);
    for(int i=arr.size()-1; i>=0 ;i--)
    {
        while(!sk.empty() && sk.top()<=arr[i])
        {
            sk.pop();
        }
        
        if(sk.empty()) 
        {
            nge[i]=-1;
        }
        else
            nge[i]=sk.top();

        sk.push(arr[i]);
    }
    return nge;

}

int main()
{
    vector<int> arr={6,8,0,1,3};

    vector<int > ans= nextGratestElement(arr);
    for(int i:ans)
    {
        cout<<i<<" ";
    }

    return 0;
}