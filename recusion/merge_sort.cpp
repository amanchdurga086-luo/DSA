#include<iostream>
#include<vector>
using namespace std;
// merge_sort

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> v1;
    int right=mid+1, left=low;
    while (left<=mid && right<=high)
    {
        if(arr[left]<arr[right])
        {
            v1.push_back(arr[left]);
            left++;
        }
        else 
        {
            v1.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        v1.push_back(arr[left++]);
    }
    while (right<=high)
    {
        v1.push_back(arr[right++]);

    }
    
    for(int i=low; i<=high; i++)
    {
        arr[i]=v1[i-low];
    }
}

void merge_sort(vector<int> &arr, int low, int high)
{
    if(low>=high) return;

    int mid=(low+high)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
}
int main()
{
    vector<int> arr ={3,1,2,4,1,5,2,6,4};
    merge_sort(arr, 0, arr.size()-1);
    for(int i:arr)
        cout<<i<<" "; 
    return 0;
}