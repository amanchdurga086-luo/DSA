#include<iostream>
#include<vector>
using namespace std;

// rotate arr by 2

void print_arr(vector<int> v3)
{
    for(int i:v3)
    {
        cout<<i<<" ";
    }cout<<endl;
}
int main()
{
    vector<int> v1={1,2,5,8,9,90,33};
    int n=v1.size();
    print_arr(v1);

    for(int i=0; i<n; i++)
    {
        swap(v1[i],v1[(i+2)%n]);
        // cout<<v1[i]<<" "<<endl;
    }
    print_arr(v1);

    
    return 0;
}