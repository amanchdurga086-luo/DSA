#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

// stock_span_problem


vector<int> findSpan(vector<int > & price)
{
    stack<int> sk;    //store index
    vector<int> ans;
    for(int i=0; i<price.size(); i++)
    {
        while(sk.size() >0 && price[sk.top()]<=price[i])
        {
            sk.pop();
        }
        
        if(sk.size()==0) 
        {
            ans.push_back(i+1);
        }
        else
        ans.push_back(i-sk.top());

        sk.push(i);
    }
    return ans;

}

int main()
{
    vector<int> price={100, 80, 60, 70, 60, 75, 85};

    vector<int > ans= findSpan(price);
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    
    return 0;
}