#include<iostream>
#include<vector>
using namespace std;

// to find pair sum 
vector<int> pair_sum(int target, vector<int> arr)
{
    vector<int> v1;
    int n=arr.size(), ps=0;
    int i=0, j=n-1;
    while(i<j)
    {
        ps=arr[i]+arr[j];
        if(ps<target)
        {
            i++;
        }
        else if(ps>target)
        {
            j--;
        }
        else
        {
            v1.push_back(i);
            v1.push_back(j);
            break;
        }
    }
    return v1;
}
int main()
{
    vector<int> arr={1,2,3,4,5};
    int target=5;
    vector<int> v1=pair_sum(target, arr);
    cout<<v1[0]<<" "<<v1[1];
    return 0;
}