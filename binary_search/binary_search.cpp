#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key)
{
    int low=0, high=(size-1), mid;

    while(low<=high)
    {
        mid= low+(high-low)/2;    //use this for ->  if in case any  low = high = INT_MAX  (out of the limit if add both)
        // cout<<mid<<endl;
        if(arr[mid]==key)
        {
            cout<<"it exist at index : ";
            return mid;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<"it not exist";
    return -1;


}

int main()
{
    int arr[]={1,20,30,40,50,60}, size=6, key=50;
    cout<<binary_search(arr, size, key);
    return 0;
}