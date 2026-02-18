// Date: 16/02/2026

#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        int a = 0;
        int b = s.size()-1;

        while(a<=b && b>0) {

            // if(s[a] == ' ' || s[a] == ',' || s[a] == ':' || s[a] == '!' || s[a] == '.') { a++;  }
            // else if (s[b] == ' ' || s[a] == ',' || s[a] == ':' || s[a] == '!' || s[a] == '.') {b--;}     
            // yea thats really silliiiiiii

            if(isalnum(s[a]) == false) {a++;}       // new function unlocked "isalnum'"
            else if(isalnum(s[b])  == false) {b--;}

            // else if(s[a] == s[b]) {a++; b--;}
            else if(tolower(s[a]) == tolower(s[b])) {a++; b--;}   // new function unlocked "tolower"

            else { return false; }
        }
        return true;
        
    }
};