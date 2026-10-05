#include<iostream>
using namespace std;


int main()
{
    int arr[] = {1,3,4,5,9}, n=5;

    // int count=0;

    bool swapped = false;

    for(int i= n-1; i>0; i--)   //n-1 se 1 tak sort karna hai
    {
        for(int j =0; j<i; j++)   //  for comparing 
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped=true;
            }
            // cout<<++count<<endl;
        }
        if(swapped==false)
        {
            break;
        }
    }
    for(int i=0; i<n; i++)
    {

        cout<<arr[i];
    }

    return 0;
}