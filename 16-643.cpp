#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int sum =0;
        int maxsum =0;

        for(int i=0; i<k; i++) {
            sum = sum + nums[i];
        }
        maxsum = sum;

        for(int i =k; i< nums.size(); i++) {
            sum = sum - nums[i-k];
            sum = sum + nums[i];

            if(sum > maxsum) {maxsum = sum;}
        }
        return (double) maxsum/k;        
    }
};
        
        
        
        
        
        
        // int sum =0;
        // int maxsum = 0;

        // for(int i=0; i<nums.size(); i++) {
        //     for(int j=0; i<k; j++) {
        //         sum = sum + nums[j];
        //         maxsum = sum;
        //     }
        //     maxsum= sum;
        // }
        
        // return maxsum/4;
        
        
        
        
        
        
        
        // vector<int> subarr(k);

        // int sum =0;
        // double av =0;


        // for(int i =0; i<nums.size(); i++) {
        //     if((i + k) < nums.size()) {
        //     for(int j =i; j<subarr.size(); j++) {
        //         sum = sum + subarr[j];
        //     } }
        //     av = sum/k;            
        // }

        // return av;
               
        
        // int i =0;
        // int sum = 0;
        // float av = sum/k;

        // while(i < nums.size()) {
        //     nums[k-1];
        // }


// a = 0;
// b = k-1
// i = a; i < k-1 