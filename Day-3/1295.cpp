#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        // int count = 0;                   // it will not come here
        int evenCount = 0;
        
        for(int i = 0; i<nums.size(); i++) {
            
            int count = 0; // it wil come here so to reset vareable everytime
            int varie = nums[i];

            while(varie > 0) {
                // int digit = varie/10;    // yeah i wrote it just
                // varie = digit;           // to make shure this part is out of error
                varie = varie/10;           // i knew this
                count++;
            }
            if (count%2 == 0) {
                evenCount++;
            }            
        }
        return evenCount;
    }
};

// class Solution {
// public:
//     int findNumbers(vector<int>& nums) {
//         int count = 0;
//         int evenCount = 0;
        
//         for (int i = 0; i<nums.size(); i++) {

//             int varie = nums[i];
            
//             // int tmp = 0;

//             // while (varie > 0) {
//                 int di = nums[i]/10;
//                 varie = di;
//                 count++;
//             // }
//             if (count%2 == 0) {evenCount++;}
//             // if (count%2 != 0) {evenCount = 0;}
//         }
//         // if (count%2 != 0) {evenCount = 0;}
                 
//         return evenCount;
//     }
// };