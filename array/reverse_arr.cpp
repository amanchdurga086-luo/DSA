#include<iostream>

using namespace std;

void reverse(int arr[], int size)
{
    int start=0, end=size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void display(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int arr[]= {1,2,3,4};
    display(arr,4);
    reverse(arr, 4);
    display(arr,4);
    return 0;
}