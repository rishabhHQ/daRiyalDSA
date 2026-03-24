// Date: 23/02/2026
// Did on: 24/02/2026

#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum =0;
        // int rsum =0;
        int tsum =0;

        for(int i=0; i<nums.size(); i++) {
            tsum += nums[i];
        }
        for(int i =0; i<nums.size();i++) {
            if(lsum == (tsum - nums[i])) {
                return i;
            }
            else {                
                tsum = tsum - nums[i];
                lsum = lsum + nums[i]; 
            }
        }
        return -1;
    }
};

// [ Time taken: 26m 43s ], no hint taken