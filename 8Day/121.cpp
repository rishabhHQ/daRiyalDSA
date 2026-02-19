#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int pc = prices[0];
        int sll = prices[1];
        int day = 0;
        // bool buy;                                    // no need

        // subprob1: buy if number is smallest, then buy = true
        for(int i = 0; i<prices.size(); i++) {
        if(pc > prices[i]) {pc = prices[i]; day = i;}
        // else return 0;                               // exicutes before full triverse of array
        }
        // buy = true;                                  // no need

        // subprob2: if buy  = true then highest number = sell
        // if(buy == true) {
            // for(int i = day; i<prices[i]; i++)       // varyyyyyy dangerousss
            for(int i = day; i<prices.size();i++) {
                if(sll < prices[i] ) {sll = prices[i];}
            }
            // return sll;
            return sll - pc;                            // i have to return profit
        // }
        // subprob2: if buy = false then no sell  
        // else {return 0;} 
        return 0;     
        
    }
};