#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        // vector<int> ans; this is where i got error i was writing into a vector 
        // that has  size 0.
        // corrected:
        vector<int> ans(nums.size());        

        for(int i =0; i<nums.size(); i++) { // got error in nums.length()
            ans[i] = nums[nums[i]];
        }
        return ans;
    }    
};