#include<iostream>
using namespace std;

int main()
{
    int n=10;
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<(n-i-1); j++)
        {
            cout<<" ";
        }
        cout<<"*";

        if(i!=0)
        {
            for (int j=0; j<(2*i-1); j++)
            {
                cout<<" ";
            }
            cout<<"*";                                                                                  
        }
        cout<<endl;
    }
    
    for(int i=0; i<n-1; i++)
    {
        for (int j=0; j<i+1; j++)
        {
            cout<<" ";
        }
        cout<<"*";

        if(i!=n-2)
        {
            for (int j=0; j<2*(n-2-i)-1; j++)     //   odd reltion  ->  2[X]-1   find X & try to make relation with i & n
            {
                cout<<" ";
            }
            cout<<"*";                                                                                  
        }
        cout<<endl;
    }
    
    return 0;
}