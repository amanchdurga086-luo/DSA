#include<iostream>
#include<vector>
using namespace std;

// check_wheather_sorted_&_rotated?

int check(vector <int> v1)
{
    int count=0,n=v1.size();
    for(int i=0; i<v1.size(); i++)
    {
        if(v1[i]>v1[i+1])
        {
            count++;
        }
    }
    if(v1[n-1]<v1[0])
    {
        count++;
    }  
    return count;                                                                     
    
}
int main()
{
    vector <int> v1 ={1,2,3};
    int count=check(v1);
    cout<<count<<endl;
    // {1,1,1,1,1}  count =0    (may be sorted as well as rotated)
    if(count==0)
    {
        cout<<"sorted only";
    }
    else if(count==2)
    {
        cout<<"sorted as well as rotated";
    }
    else
    {
        cout<<"not sorted";
    }
    return 0;
}