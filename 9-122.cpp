#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int minprice = prices[0];        
        // vector<int> allprofit(// some size );
        // vector<int> allprofit;                           // no need its just extra
        int maxprofit = 0;

        for(int i = 1; i<prices.size(); i++) {
            if(prices[i] > prices[i-1]) {
                maxprofit = maxprofit + prices[i] - prices[i-1];        // total profit, profit as at i day we sell and at i-1 we buy. noic i didnt thought that way
            }

            // else {
            //     int profit = prices[i] - minprice;               // no need
            //     allprofit.push_back(profit);                
            // }
        }
        // for(int i = 0; i<allprofit.size(); i++) {
        //     if(maxprofit < allprofit[i]) {maxprofit = allprofit[i];}     // no need
        // }
        return maxprofit;
    }
};