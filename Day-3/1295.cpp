#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int evenCount = 0;
        
        for (int i = 0; i<nums.size(); i++) {

            int varie = nums[i];
            
            // int tmp = 0;

            // while (varie > 0) {
                int di = nums[i]/10;
                varie = di;
                count++;
            // }
            if (count%2 == 0) {evenCount++;}
            // if (count%2 != 0) {evenCount = 0;}
        }
        // if (count%2 != 0) {evenCount = 0;}
                 
        return evenCount;
    }
};