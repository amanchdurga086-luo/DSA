#include<iostream>
using namespace std;

long long int sqrt_num(int n)
{
    int s=0, e=n;
    long long int ans=-1;
    long long int mid=s+(e-s)/2;
    while(s<=e)
    {
        long long int square=mid*mid;
        if(square==n)
        {
            return mid;
        }
        if(square<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double more_precision(int n, int precision, int tempsol)
{
    double factor=1;
    double ans=tempsol;
    for(int i=0; i<precision; i++)
    {
        factor=factor/10;
        {
            for(double j=ans; j*j<n; j=ans+factor)
            {
                ans=j;
            }
        }
    }
    return ans;
}

int main()
{
    int n=101;
    int tempsol=sqrt_num(n), precision=3;
    cout<<more_precision(n,precision,tempsol);
    return 0;
}