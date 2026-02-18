#include <vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {

        int n = s.size();
        int left = 0;
        int right = n-1;

        while(left < right) {
           int temp = s[left];
           s[left] = s[right];
           s[right] = temp;
           left++;
           right--; //just didnt looked at right-- paer instead i wrote right++ lol
        }        
    }
};