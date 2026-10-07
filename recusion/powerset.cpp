#include<iostream>
#include<vector>
using namespace std;
// by brute force
void powerset(int idx, vector<int> &arr, int n, vector<int> &ds, vector<vector<int>> &ans)
{
    ans.push_back(ds);
    for(int i=idx; i<n; i++)
    {
        if(i !=idx && arr[i]==arr[i-1]) continue;
        ds.push_back(arr[i]);
        powerset(i+1, arr, n, ds, ans);
        ds.pop_back();
    }
} 
int main()
{
    vector<int> arr={1,2,2,2,3,3};
    int n=arr.size();
    vector<vector<int>> ans;
    vector<int> ds;
    powerset(0, arr, n, ds, ans);
    for (const auto &vec : ans) {        // iterate each vector<int>
    for (int x : vec) {              // iterate each integer
        cout << x << " ";
    }
    cout << endl;
}
}