#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 9, 5, 1}, n=5;

    for(int i=1; i<n; i++)  //  visit every element
    {
        int temp=arr[i];
        int j=i-1;
        for(; j>=0; j--)   //  compare & shift
        {
            if(temp<arr[j])
            {
                // shift
                arr[j+1]=arr[j];
            }
            else
            {
                // arr[j+1]=temp;    -> dont write here becase give wrong answer at index 0 if need to shift
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0; i<n; i++)
    {

        cout<<arr[i];
    }


    return 0;
}