#include<iostream>
#include<vector>
using namespace std;

// rth_row_print
void rth_row_print(int n)
{
    vector<int> v1;
    int ans=1;
    v1.push_back(ans);
    

    for(int i=1; i<n; i++)
    {
        ans=ans*(n-i);
        ans=ans/i;
        v1.push_back(ans);
        
    }
    for(int i: v1)
    {
        cout<<i<<" ";
    }
}

int main()
{
    int row, col;
    cout<<"enter row"<<endl;
    cin>>row;
    rth_row_print( row );
    return 0;
}