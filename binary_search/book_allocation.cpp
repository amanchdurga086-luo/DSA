#include<iostream>
using namespace std;

bool is_valid(int book[], int mid, int st, int size)
{
    int i=0, page=0, m=1;
    for(int i=0; i<size; i++)
    {
        if(book[i]>mid)
        {
            return 0;
        }
        if(page+book[i]<=mid)
        {
            page+=book[i];
        }
        else
        {
            m++;
            page=book[i];
        }
    }
    if(m>st)//
    return 0;

    else
    return 1;
}

int min_possible_max_page(int book[], int size, int st)
{
    int page_max=0;
    for (int i = 0; i < size; i++)
    {
        page_max+=book[i];
    }
    int s=0, e=page_max, ans=-1;
    int mid=s+(e-s)/2;  //min possible 
    while(s<=e)
    {
        if(is_valid(book, mid, st, size))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int book[]={2,1,3,4};
    int size=4, st=2;
    cout<<min_possible_max_page(book, size, st);
    
    return 0;
}