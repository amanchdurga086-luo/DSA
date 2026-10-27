#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

// celebrity pob;   who known to all but not know anyone
                    // arr[i][j]==1  i know j
            //    arr[i][j]==0  i don't  know j

int getCelebrity(vector<vector<int>> &arr)
{
    int n=arr.size();
    stack<int> sk;
    for(int i=0; i<n; i++)   
    {
        sk.push(i);           // 0 -> 1-> 2    push every candidate
    }
    while(sk.size()>1)
    {
        int i=sk.top(); // take one person
        sk.pop();            

        int j=sk.top();  //take second person
        sk.pop();

        if(arr[i][j]==0) sk.push(i);    //i dont know j
        else sk.push(j);                // i know j

    }
    int celeb=sk.top();   
    for(int i=0; i<n; i++)
    {
        if(i !=celeb && (arr[i][celeb] ==0 || arr[celeb][i] ==1))
            return -1;
    }
    return celeb;
}

int main()
{
    vector<vector<int>> arr={ {0,1,0},
                            {0,0,0},
                            {0,1,0}};

    int ans=getCelebrity(arr);
    cout<<ans;
    
    return 0;
}