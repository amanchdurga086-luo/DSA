#include<iostream>

using namespace std;

int unique(int arr[], int size)
{
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans=ans^arr[i];    //it cancle the same element
        
    }
    return ans;
    
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
    int arr[]= {1,5,2,2,5}, size =5;
    display(arr,size);
    cout<<unique(arr,size);
    
    return 0;
}