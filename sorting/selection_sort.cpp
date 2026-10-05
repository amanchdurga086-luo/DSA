#include<iostream>
using namespace std;

int main()
{
    int A[] = {3, 4, 9, 5, 1}, n=5, min_ind=0;

    for(int i=0; i<n-1; i++)  //last element ko touch karne ki jarurat nahi hai
    {
        min_ind=i;
        for(int j=i+1; j<n; j++)  //  jab i n-2 pe hoga to j ko n-1 pe jakar check karna ho ki kahi uspar element chota to nahi hai
        {
            if(A[j]<A[min_ind])
            {
                min_ind=j;
            }
        }
        swap(A[i], A[min_ind]);
    }
    for(int i=0; i<n; i++)
    {

        cout<<A[i];
    }

    return 0;
}