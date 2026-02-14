#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int a = 1;
        int b = 0;

        for(;a<nums.size(); a++) {
            
            if(nums[a] != nums[b]) {
                b++;
                // int temp = nums[a];
                nums[b] = nums[a];
                // nums[b] = temp;
                // a++;
                count++;
            }
        }
        return count;
    }
};