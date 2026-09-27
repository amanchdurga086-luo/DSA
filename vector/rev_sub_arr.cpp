#include<iostream>
#include<vector>
using namespace std;

vector<int> rev_ar(vector<int> ar, int ind)
{
    int e=ar.size()-1, s=ind+1;
    
    while(s<e)
    {
        swap(ar[e],ar[s]);
        s++;
        e--;
    }
    return ar;
}

int main()
{
    vector<int> ar={1,2,3,4,5};
    
    for(int i:ar)
    {
        cout<<i;
    }cout<<endl;
    
    vector<int> rev=rev_ar(ar, 0);
    for(int i:rev)
    {
        cout<<i;
    }cout<<endl;
    
    return 0;
}