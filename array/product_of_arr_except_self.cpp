#include<iostream>
#include<vector>
using namespace std;

// product of arr except self without divide
// Extra Space: O(1) (ignoring output array)
vector<int> product_of_arr_except_self(vector<int> arr)
{
    int n=arr.size();
    vector<int> ans(n);
    ans[0]=1;
    // preffix
    for(int i=1; i<n; i++)
    {
        ans[i]=ans[i-1]*arr[i-1];
    }
    // suffix
    int suffix=1;
    for(int i=n-2; i>=0; i--)
    {
        suffix=suffix*arr[i+1];    // ans store -> preffix already 
        ans[i]=ans[i]*suffix;    // multiply prefix value with suffix

    }
    return ans;
}

int main()
{
    vector<int> arr ={1,2,3,4,5};
    vector<int> rel= product_of_arr_except_self(arr);
    for(int i:rel)
    {
        cout<<i<<" ";
    }
    return 0;
}