#include<iostream>
using namespace std;

// permutation in string  a to z   given
bool isEqual(int frq[], int frqWind[])
{
    for(int i=0; i<26; i++)
    {
        if(frq[i]!=frqWind[i]) return false;
    }
    return true;
}
bool checkExistPer(string st1, string st2)
{
    int frq[26]={0};  //count each char
    for(int i=0; i<st1.length(); i++)
    {
        frq[st1[i]-'a']++;
    }

    int windSize = st1.length();
    for(int i=0; i< st2.length(); i++)
    {
        int wnidIdx=0, idx=i;
        int frqWind[26]={0};
        while(wnidIdx < windSize && idx < st2.length())
        {
            frqWind[st2[idx]-'a']++;
            idx++;
            wnidIdx++;
        }
        if(isEqual(frq, frqWind))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string st1 = "aedb";
    string st2 = "eidbaooo";
    bool ans = checkExistPer(st1, st2);
    cout<<ans;
    return 0;
}