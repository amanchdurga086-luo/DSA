#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// heapify

void heapify(int arr[], int size, int i)
{
    int largest=i;
    int left_child=2*i;
    int right_child=2*i+1;

    if(left_child <= size && arr[left_child] > arr[largest])
        largest = left_child;
    if(right_child <= size && arr[right_child] > arr[largest])
        largest = right_child;

    if(largest !=i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, size, largest);
    }

}

// use max heap
void heap_sort(int arr[], int n)
{
    while(n>1)
    {
        swap(arr[1], arr[n]);
        n--;
        heapify(arr, n, 1);
    }
}

int main()
{
    int arr[100]={-1, 54, 53, 55, 52,50};
    int size=5;
    int i=size/2;
    while( i>0)
    {
        heapify(arr, size,i);
        i--;
    }
    // print
    for(int j=1; j<=size; j++)
    {
        cout<<arr[j]<<" ";
    }cout<<endl;

    //heap sort
    heap_sort(arr, size);
    
    for(int j=1; j<=size; j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}