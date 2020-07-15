#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {

    int mx_profit = 0;
    int min_prices = INT_MAX;
    for(int i=0 ; i<prices.size() ; i++){
        if(prices[i] < min_prices){
            min_prices = prices[i];
        }else if(mx_profit < prices[i] - min_prices){
            mx_profit = prices[i] - min_prices;
        }
    }

    return mx_profit;

}

int main(){
    vector<int> a = {7,6,4,3,1};
    cout << maxProfit(a);
}
