class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        // my logic didnt worked sed..

        unordered_set<int> num;
        
            for(int i = 0; i<nums.size(); i++) {
                if(num.count(nums[i])) {return true;}       // <setname>.count(<number>) is new tin
                num.insert(nums[i]);                    // <setname>.insert(<number>) is new tin
            }        
        return false;
    }
};

        // unordered_set<int> num;
        // int a = 0;
        //     for(int i = 0; i<nums.size(); i++) {
        //         while(a < num.size()) {
        //         if(num[a] == nums[i]) {return true;} 
        //         a++;}
        //         num[i] = nums[i];
        //     }        
        // return false;
