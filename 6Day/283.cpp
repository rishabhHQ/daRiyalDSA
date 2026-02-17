#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a = 0;
        int b = 0;
        // int count = 0;       // usless

        for(;a<nums.size();a++) {
            if(nums[a] != 0 ) {
                // b++;         // yea what if b++ is non zero? therefore NO
                nums[b] = nums[a];
                b++;
                // count++;     // usless

                // while(nums[a] != 0) {        // yea i was thinkin somthing
                //     a++;
                //     if(nums[a] != 0) {nums[b] = nums[a];}
                // } 
            }
        }
        // for(;a<nums.size();a++) {        // never exicuted
        //     if(nums[a] > count) {
        //         nums[a] = 0;
        //     }
        // }
        while(b<nums.size()) {
            nums[b] = 0;
            b++;
        } 
    }
};