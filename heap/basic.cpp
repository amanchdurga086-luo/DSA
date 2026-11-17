#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// max heap
class heap
{
    public:
        int arr[100];
        int size;
        heap()
        {
            size=0;
        }
        void insert(int data)  //  tc - log(n)
        {
            size++;
            arr[size]=data;

            int idx=size;
            while(idx>1)
            {
                int parent=idx/2;

                if(arr[idx]> arr[parent])
                {
                    swap(arr[idx], arr[parent]);
                    idx=parent;
                }
                else return ;

            }

        }

        void print()
        {
            for(int i=1; i<=size; i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
        }

        void delete_heap()  // tc - log(n);
        {
            arr[1]=arr[size];
            arr[size]=0;
            size--;
            int idx=1;
            while(idx<size)
            {
                int left_child=idx*2;
                int right_child=idx*2+1;
                if(left_child<size && arr[idx]<arr[left_child])
                {
                    swap(arr[idx], arr[left_child]);
                    idx=left_child;
                }
                else if(arr[idx]< arr[right_child])
                {
                    swap(arr[idx], arr[right_child]);
                    idx=right_child;
                }
                else return;
            }
        }
    
};
int main()
{
    heap one;
    one.insert(50);
    one.insert(55);
    one.insert(53);
    one.insert(52);
    one.insert(54);
    one.print();
    
    one.delete_heap();
    one.print();
    
    return 0;
}