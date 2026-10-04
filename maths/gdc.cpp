#include<iostream>
using namespace std;

int gdc(int a, int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        {
            a=a%b;
        }
        else
        {
            b=b%a;
        }

    }

    if(a==0) return b;
    return a;
}

int gdcRcu(int a, int b)
{
    if(b==0)  return a;
    gdcRcu(b, a%b);
}

int lcm(int a, int b)
{
    int GDC=gdc(a,b);
    int lcm=(a*b)/GDC;
}
int main()
{
    int a, b;
    cout<<"enter num"<<endl;
    cin>>a>>b;
    // cout<<gdc(a,b);
    // cout<<gdcRcu(a,b);
    cout<<lcm(a, b);

    return 0;
}