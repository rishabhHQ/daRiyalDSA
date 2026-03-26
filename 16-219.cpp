#include <vector>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

////////// 1
        for(int i=0; i<nums.size(); i++) {
            for(int j =i+1; j<=i+k && j<nums.size(); j++) {
                if(nums[i] == nums[j] && abs(i-j) <=k ) {
                    return true;
                }
            }
        }
        return false;
    }
};

////////// 2
//         for(int i=0; i<k; i++) {
//             for(int j=i+1; j<nums.size(); j++) {
//                 if((nums[i] == nums[j]) && (abs(i-j) <= k)) { return true; }

//                 else if(((i-j)*-1) <= k) {return true;}
//                 else if((nums[i] == nums[j]) && ((i-j) < 0)) {
//                     if(((i-j)*-1) <= k) {return true;}
//                     else return false;
//                 }
                
//             }
//         }
//         return false;


        
        
        
        // for(int i=0; i<nums.size(); i++) {
        //     for(int j=i+1; j<i+k; j++) {
        //         if(nums[i] == nums[j]) {return true;}
        //     }
        // }
        

        // int b = nums.size();
        // int a = nums[0];

        // for(int i=0; i<b; i++) {
        //     if(nums[i] == nums[b]) {
        //         if(((i-b) > 0) && ((i-b)<=k)) {return true;}
        //         else if((i-b) < 0) {
        //             if((((i-b)*-1) > 0) && ((i-b) <= k) ) {return true;}
        //         }
        //     }
        // }
        
        // return false;
    