#include<iostream>
using namespace std;

// check palindrome
bool check(string str, int i, int n)
{
    if(i>=n/2) return true;
    if(str[i] != str[n-i-1]) return false;
    return check(str, i+1, n);
}
int main()
{
    string str="1231";
    cout<<check(str, 0, str.length());
    
    return 0;
}