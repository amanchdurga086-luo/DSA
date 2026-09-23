#include<iostream>

using namespace std;

void alternate_swap(int arr[], int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if(i+1<size)  // check next element exist or not
        swap(arr[i],arr[i+1]);
        
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
    int arr[]= {2,1,4,3,6,5,7,8}, size =8;
    display(arr,size);
    alternate_swap(arr, size);
    display(arr,size);
    return 0;
}