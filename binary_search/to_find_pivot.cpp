#include<iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int s=0, e=size-1;
    int mid= s+(e-s)/2;
    while(s<e)
    {
        if(arr[0]<=arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid= s+(e-s)/2;

    }
    return s;
}
int main()
{
    int arr[]={10,0,2,3,4},size=5;
    int p =pivot(arr, size);
    cout<<p;
    return 0;
}