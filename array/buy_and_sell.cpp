#include<iostream>
#include<vector>
using namespace std;

void maxProfit(vector<int> price)
{
    int bestBuy=price[0], maxPro=0, bestSel;
    for(int i=1; i<price.size(); i++)
    {
        bestSel= price[i];
        if(bestSel > bestBuy)
        {
            maxPro = max(maxPro, (bestSel-bestBuy));
        }
        bestBuy=min(bestSel, bestBuy);
    }
    cout<<maxPro;
}

int main()
{
    vector<int> price ={7,4,9,1,4,5};  // diff day
    maxProfit(price);
    return 0;
}