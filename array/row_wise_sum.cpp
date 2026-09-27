#include<iostream>
using namespace std;
// row wise sum & ;largest sum row

void row_wise_sum(int arr[][3], int row, int col)
{
    int lar_sum=0;
    int lar_sum_row;
    cout<<"row_wise_sum:"<<endl;
    for(int i=0; i<3; i++)
    {
        int sum=0;
        for(int j=0; j<3; j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
        if(lar_sum<sum)    //;largest sum row
        {
            lar_sum=sum;
            lar_sum_row=i;
        }
    }
    cout<<"largest sum:"<< lar_sum<<endl;
    cout<<"largest sum row:"<<lar_sum_row<<endl;
    
}

int main()
{
    int arr[3][3];
    cout<<"enter the intput"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    row_wise_sum(arr, 3, 3);
    return 0;
}