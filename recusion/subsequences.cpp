#include<iostream>
#include<vector>
using namespace std;

// subsquence  3 1 2 31 32 12

void print_subsquence(int idx, vector<int> &v, int arr[], int n)
{
    if(idx>=n)
    {
        for(int i: v)
        {
            cout<< i;
        }
        if(v.size()==0) cout<<"{}";
        cout<<endl;
        return;
    }
    v.push_back(arr[idx]);
    print_subsquence(idx+1, v, arr, n);    //take
    v.pop_back();
    print_subsquence(idx+1, v, arr, n);   // not take
    // return;
}

int main()
{
    int arr[]={3,1,2};
    int n=3;
    vector<int> v;
    print_subsquence(0, v, arr, n);
    return 0;
}