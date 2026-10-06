#include<iostream>
using namespace std;

//first & last position of an element in sorted array

int first_occur(int arr[], int size, int key)
{
    int s=0, e=(size-1), m, ans=-1;
    m= s+(e-s)/2;    

    while(s<=e)
    {
        
        if(arr[m]==key)
        {
            ans=m;
            e=m-1;
        }
        else if(arr[m]<key)
        {
            s=m+1;
        }
        else
        {
            e=m-1;
        }
        m= s+(e-s)/2;   
    }
   
    return ans;
}

int find_num_of_key(int first_position, int last_position)   //  first & last position ->  use to find no. of key present
{
    // cout<<last_position-first_position<<endl;
    return (last_position-first_position)+1;
}

int last_occur(int arr[], int size, int key)
{
    int s=0, e=(size-1), m, ans=-1;
    m= s+(e-s)/2;    

    while(s<=e)
    {
        
        if(arr[m]==key)
        {
            ans=m;
            s=m+1;
        }
        else if(arr[m]<key)
        {
            s=m+1;
        }
        else
        {
            e=m-1;
        }
        m= s+(e-s)/2;  
    }
   
    return ans;
}

int main()
{
    int arr[]={1,2,2,2,3,3}, size=6, key=2;
    // cout<<first_occur(arr, size, key)<<endl;
    // cout<<last_occur(arr, size, key)<<endl;
    int last=last_occur(arr, size, key);
    int first=first_occur(arr, size, key);
    cout<<find_num_of_key(first,last);

    return 0;
}