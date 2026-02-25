#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        bool flag = false;
        
        if(s.length() != t.length()) {return false;}

        for(int i = 0; i<t.length(); i++) {
            for(int  j = 0; j<s.length(); j++) {
                if (t[i] == s[j]) { 
                    s[j] = '#';
                    flag = true;
                    break;
                } 
            }            
        }
        if(flag == false) {return false;}
    }
};