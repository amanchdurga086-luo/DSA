#include<iostream>
#include<vector>
using namespace std;

// add_of_two_array

vector <int> reverse(vector <int> v3)
{
    int s=0, e=v3.size()-1;
    while (s<e)
    {
        swap(v3[s],v3[e]);
        s++;
        e--;
    }
    
    return v3;
}

vector <int> add(vector <int> v1,vector <int> v2)
{
    vector <int> v3;
    int n= v1.size() , m=v2.size();
    int i=n-1, j=m-1;
    int carry=0;
    while(i>=0 && j>=0)
    {
        int sum =v1[i]+ v2[j]+carry; 
        carry=sum/10;
        sum=sum%10;
        v3.push_back(sum);
        i--;
        j--;
    }

    // first case
    while(i>=0)
    {
        int sum =v1[i]+ carry; 
        carry=sum/10;
        sum=sum%10;
        v3.push_back(sum);
        i--;
    }

    // second case
    while(j>=0)
    {
        int sum =v2[j]+ carry; 
        carry=sum/10;
        sum=sum%10;
        v3.push_back(sum);
        j--;
    }
    
    // third case
    while(carry!=0)
    {
        v3.push_back(carry);
        carry=0;
    }

    vector <int> ans= reverse(v3);
    return ans;
}
int main()
{
    vector <int> v1 ={9,9};
    vector <int> v2 ={9,9,9};
    
    vector <int> v3 =add(v1,v2);
    for(int i : v3)
    {
        cout<<i;
    }
    return 0;
}