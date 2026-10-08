#include<iostream>
#include<vector>
using namespace std;

// all subsequence_sum
void printS(int arr[], int n, int idx, vector<int> v, int sum, int s)
{
    if(idx==n)
    {
        if(s==sum)
        {
            for(int i: v)
                cout<<i;
            cout<<endl;
        }
        return;
    }
    v.push_back(arr[idx]);
    s+=arr[idx];
    printS(arr,  n,  idx+1, v, sum, s);  //pick

    v.pop_back();
    s-=arr[idx];
    printS(arr,  n,  idx+1, v, sum, s);   //not pick
}

int main()
{
    int arr[]={1,2,1,7, 1,8};
    vector<int> v;
    int n=6, sum=8;
    printS(arr, n, 0, v, sum, 0);
    return 0;
}


// #include<iostream>
// #include<vector>
// using namespace std;

// // one subsequence_sum
// bool printS(int arr[], int n, int idx, vector<int> v, int sum, int s)
// {
//     if(idx==n)
//     {
//         if(s==sum)
//         {
//             for(int i: v)
//                 cout<<i;
//             cout<<endl;
//             return true;
//         }
//         return false;
//     }
//     v.push_back(arr[idx]);
//     s+=arr[idx];
//     if(printS(arr,  n,  idx+1, v, sum, s)==true) return true;  //pick

//     v.pop_back();
//     s-=arr[idx];
//     if(printS(arr,  n,  idx+1, v, sum, s)==true) return true;   //not pick

//     return false;
// }

// int main()
// {
//     int arr[]={2,7, 1,8};
//     vector<int> v;
//     int n=4, sum=8;
//     printS(arr, n, 0, v, sum, 0);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// // subsequence_sum, total num
// int printS(int arr[], int n, int idx, vector<int> v, int sum, int s)
// {
//     if(idx==n)
//     {
//         if(s==sum)
//         {
//             return 1;
//         }
//         return 0;
//     }
//     s+=arr[idx];
//     int pick=printS(arr,  n,  idx+1, v, sum, s);  //pick

//     s-=arr[idx];
//     int not_pick=printS(arr,  n,  idx+1, v, sum, s);   //not pick

//     return pick+not_pick;
// }

// int main()
// {
//     int arr[]={1,1,2,7, 1,8};
//     vector<int> v;
//     int n=6, sum=8;
//     cout<<printS(arr, n, 0, v, sum, 0);
//     return 0;
// }