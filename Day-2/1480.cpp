#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        vector<int>sumArr(nums.size());
        int sum = 0;
        for(int i = 0; i<nums.size(); i++) {
            sum = sum + nums[i];
            sumArr[i] = sum;
        }
        return sumArr;

        
    }
};