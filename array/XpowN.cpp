#include<iostream>
using namespace std;

// 3 pow 5
// 0 -> ignore
// 1 -> accept
void XpowN(double x, int n)
{
    int binForm=n;
    double ans=1.0;
    if(n<0)
    {
        x=1/x;
        binForm=-n;
    }
    while(binForm > 0)
    {
        if(binForm%2 == 1)
        {
            ans*=x;
        }
        x*=x;
        binForm/=2;
    }
    cout<<ans;
}

int main()
{
    int n=-9;
    double x=5;
    XpowN(x,n);
    return 0;
}