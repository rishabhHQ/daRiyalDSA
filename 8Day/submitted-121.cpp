#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = prices[0];
        int pr = 0;

        for(int i = 0; i<prices.size(); i++) {
            if(mp > prices[i]) {mp = prices[i];}        // checked for lowest price for buyin
            else {
                int profit = prices[i]-mp;
                if(profit > pr) {pr = profit;}
            }
        }
        return pr;    }


        // OKAY noic
};