#include<iostream>
#include<vector>
using namespace std;

void wave_print(int arr[][3], int nrow, int ncol)
{
    vector <int> a;
    for(int col=0; col<ncol; col++)
    {
        if(col&1)
        {
            // odd col 
            for(int row=nrow-1; row>=0; row--)
            {
                a.push_back(arr[row][col]);
                
            }
        }
        else
        {
            for(int row=0; row<nrow; row++)
            {
                a.push_back(arr[row][col]);

            }
            
        }
    }
    for(int i:a)
    {
        cout<<i<<" ";
    }
}

int main()
{
    int arr[3][3];
    int row=3 ,col=3;
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
    wave_print(arr, row, col);
    return 0;
}