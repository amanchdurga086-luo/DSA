#include<iostream>
using namespace std;

int name_len(char name[])
{
    int count=0;
    for(int i=0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(char name[], int len)
{
    int s=0, e=len-1;
    while(s<e)
    {
        swap(name[s++], name[e--]);
    }
    cout<<name;
}

int main()
{
    char name[10];
    cout<<"enter your name"<<endl;
    cin>>name;
    int len=name_len(name);
    cout<<len<<endl;
    reverse(name, len);
    return 0;
}