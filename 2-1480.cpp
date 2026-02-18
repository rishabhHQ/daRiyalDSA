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

// no error went perfrctly well although I mistakelly wrote "i" instead of "nums[i]" in sum part (line 10)
// but that perfectly fine I got that moment later after running code after getting wrong answer.