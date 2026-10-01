#include<iostream>

using namespace std;
// find duplicate if n size arr has 1 to n-1 no. & one element repeat
int duplicate(int arr[], int size)
{
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans=ans^arr[i];   
        
    }
    for (int i = 1; i < size; i++)
    {
        ans=ans^i;      
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
    int arr[]= {1,2,3,4,2}, size =5;
    display(arr,size);
    cout<<duplicate(arr,size);
    
    return 0;
}