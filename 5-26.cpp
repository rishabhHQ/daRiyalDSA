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
                // int temp = nums[a];      //nah no swapping required
                nums[b] = nums[a];
                // nums[b] = temp;          //dosnt matter what will later elemets say
                // a++;                     // just a typoo still to be noted
                count++;
            }
        }
        return count+1;                     // yeah wrote count instead of count+1
    }
};