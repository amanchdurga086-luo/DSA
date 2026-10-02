#include<iostream>
using namespace std;

int main()
{
    int n=4;
    for (int i = 0; i < n; i++)   //outer loop -> no. of line
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)   //inner loop -> how many character in one line  & logic written in it.
        {
            // cout<<"* ";
            cout<<ch;
            ch=ch+1;   // ch convert into integer(Ascii) ->  integer +1  ->  integer convert into ch 
        }
        cout<<endl;
        
        /* code */
    }
    
    return 0;
}