#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>v1, vector<int> v2)
{
    vector<int> v3;
    int n=v1.size(), m=v2.size();   
    int i=0, j=0, k=0;
    while(i<n && j<m)  //two pointer approach
    {
        if(v1[i]<v2[j])
        {
            v3.push_back(v1[i++]);           
        }
        
        else
        {
            v3.push_back(v2[j++]);          
        }
    }
    while(i<n)
    {
        v3.push_back(v1[i++]);
    }
    while(j<m)
    {
        v3.push_back(v2[j++]);
    }
    return v3;
}

void print_arr(vector<int> v3)
{
    for(int i:v3)
    {
        cout<<i<<" ";
    }cout<<endl;
}

int main()
{
    vector<int> v1={1,2,5,8,9,90};
    vector<int> v2={3,7,10,99};
    vector<int> ans;
    ans=merge(v1,v2);
    print_arr(ans);
    
    return 0;
}