// Date: 26/02/2026

#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] >= target) {return i;}            
        }
        return nums.size();
    }
};