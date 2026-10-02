#include<iostream>
using namespace std;

int main()
{
    // butterfly pattern
    int n=7;

    // first half
    for(int i=0; i<n; i++)
    {
        // star
        for (int j=0; j<i+1; j++)
        {
            cout<<"*";
        }

        // space
        for (int j=0; j<n-1-i; j++)
        {
            cout<<" ";
        }

        // space
        for (int j=0; j<n-1-i; j++)
        {
            cout<<" ";
        }

         // star
        for (int j=0; j<i+1; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }

    // second half
    for(int i=0; i<n; i++)
    {
        // star
        for (int j=0; j<n-i; j++)
        {
            cout<<"*";
        }

        // space
        for (int j=0; j<i; j++)
        {
            cout<<" ";
        }

        // space
        for (int j=0; j<i; j++)
        {
            cout<<" ";
        }

         // star
        for (int j=0; j<n-i; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    
    return 0;
}