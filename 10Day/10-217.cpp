// Date: 19/02/2026

#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int a = 0;
        int b = 1;

        for(; a<nums.size(); a++) {
            for(; b<nums.size(); b++) {
            if(nums[a] == nums[b]) {return true;}
            else {b++;}
            }                       
        }
        return false;
    }
};

// 54 / 77 noic yea its o(n^2)