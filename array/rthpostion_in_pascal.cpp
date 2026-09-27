#include<iostream>
using namespace std;

// rth(col) postion_in pascal tringle
int fun_nCr(int n, int r)
{
    int ans=1;
    if(r==0)
    {
        return ans;
    }

    for(int i=1; i<=r; i++)
    {
        ans=ans*(n-i+1);
        ans=ans/i;
    }
    return ans;
}

int main()
{
    int row, col;
    cout<<"enter row & col"<<endl;
    cin>>row>>col;
    int rel= fun_nCr(row-1, col-1);
    cout<<rel;
    return 0;
}