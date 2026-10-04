#include<iostream>
using namespace std;
#include<vector>

// Prime no. range by sieve_of_eratosthenes

void primeNumRange(int num)
{
    vector<bool> isprime(num+1, true);

    for(int i=2; i<num; i++)
    {
        if(isprime[i]) cout<<i<<" ";
        for(int j=2*i; j<num; j=j+i)
        {
            isprime[j]=false;
        }
    }
}
int main()
{
    int num;
    cout<< "inter the num"<<endl;
    cin>>num;
    primeNumRange(num);
    
    return 0;
}