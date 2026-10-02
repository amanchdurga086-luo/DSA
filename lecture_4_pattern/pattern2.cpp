#include<iostream>
using namespace std;

int main()
{
    int n=5;
    for (int i = 0; i < n; i++)   //outer loop -> no. of line
    {
        char ch='A'+i;

        for (int j = i+1; j >0; j--)   //inner loop -> what to do in that line(logic)
        {
            cout<<ch<<" ";
            ch=ch-1;

        }
        cout<<endl;
    }
    
    return 0;
}