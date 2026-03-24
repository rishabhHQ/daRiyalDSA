// Date: 22/02/2026
// Did on: 24/03/2026

#include <vector>
using  namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int current = 0;
        int maxstreak = 0;

        for(int i =0; i<nums.size();i++) {
        if(nums[i] == 1) {
            current++;
            if(maxstreak < current) {maxstreak = current;}
        }
        else(current = 0);
        }

        return maxstreak;


    }
};

// didnt realized tat i was askin only for streak of 1 not 0
// time taken: 28min 44 sec, 1 hint