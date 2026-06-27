#include<vector>
using namespace std;


// wrong sol
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if(n == 0 && m == 0) { cout << 0; }
        if(n == 0 ) {
            for(int x : nums1) {cout << x;}
        }
        else { for(int x : nums2) {cout << x;}}

        int j = 0;
        for(int i = m-1; i<(nums1.size() || n); i++) {
            while(j < nums2.size()) {
                nums1[i-1] = nums2[j];
                j++;
            }
        }
        sort(nums1.begin(), nums1.end());
        
        for(int x : nums1) {
            cout << x;
        }
    }
};



// right sol
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for(int i = 0; i<n; i++) {
            nums1[m+i] = nums2[i]; }
            
        sort(nums1.begin(), nums1.end());
    }
};


// my thinking was correct but implementation was not