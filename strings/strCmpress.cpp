#include<iostream>
using namespace std;

string strCmpress(string str)
{
    int idx=0;
    for(int i=0; i< str.length(); i++)
    {
        char ch = str[i];
        int count =0;
        while(i< str.length() && str[i]==ch)
        {
            count++;
            i++;
        }
        if(count == 1)
        {
            str[idx++]=ch;
        }
        else
        {
            str[idx++]=ch;
            string str2 = to_string(count);
            for(char dig:str2)
            {
                str[idx++]=dig;
            }
        }
        i--;
    }
    str.resize(idx);
    return str;
}
int main()
{
    string str = "aabbcccccaaae";
    cout<<strCmpress(str);
    return 0;
}