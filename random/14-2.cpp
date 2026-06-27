#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string front = strs[0];

        if (strs.empty()) return "";

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(front) != 0) {
                front.pop_back();
                if (front.empty())
                    return "";
            }
        }
        return front;
    }
};




// do not judge plix💀
// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         vector<string> ans;
//         string first, finala;
//         int a =0;
//         int b=1;
//         int count = 0;

//         for(int i=0; i<strs[a].size(); i++) {
//             for(int j=0; j<strs[b].size(); j++) {
//                 if(strs[a][i] == strs[b][j]) { i++; j++;}
//                 else { break; }
//                 count = j;
//             }
//         }
//         if (!strs.empty()) {
//         first = strs.front(); }

//         for(int i=0; i<count; i++) {
//             ans[i] = first[i];
//         }

//         if (!ans.empty()) {
//         finala = ans.front();}

//         return finala;

//     }
// };


// Working


/*
string prefix = strs[0];

for(int i = 1; i < strs.size(); i++) {
    int j = 0;

    while(j < prefix.size() &&
          j < strs[i].size() &&
          prefix[j] == strs[i][j]) {
        j++;
    }

    prefix = prefix.substr(0, j);
}

return prefix;
*/

/*
Step 1

Input:

["flower","flow","flight"]

We start with

string prefix = strs[0];

So:

prefix = "flower"

We assume the entire first string is the common prefix.

Step 2

Loop through the remaining strings.

for(int i=1; i<strs.size(); i++)

First iteration:

strs[1] = "flow"
Step 3

This line is the key:

strs[i].find(prefix)

For now imagine:

"flow".find("flower")

Question:

"Does flow start with flower?"

Answer:

No.

So:

"flow".find("flower")

returns something other than 0.

Therefore:

while(strs[i].find(prefix) != 0)

becomes true.

Step 4

Now:

prefix.pop_back();

What does pop_back() do?

It removes the last character.

Example:

prefix = "flower"

After:

prefix.pop_back();

becomes:

"flowe"

Again:

prefix.pop_back();

becomes:

"flow"
Step 5

Check again:

"flow".find("flow")

Now the string starts with "flow".

So:

find(...)

returns:

0

because "flow" is found starting at index 0.

Now:

while(strs[i].find(prefix) != 0)

becomes false.

We exit the while loop.

Current:

prefix = "flow"
Step 6

Move to next string.

strs[2] = "flight"

Current prefix:

"flow"

Check:

"flight".find("flow")

Does flight start with flow?

No.

Shrink again.

prefix.pop_back();
"flo"

Check:

"flight".find("flo")

No.

Again:

prefix.pop_back();
"fl"

Check:

"flight".find("fl")

Yes.

fl starts at index 0.

So:

find("fl")

returns:

0

Exit while.

Current:

prefix = "fl"
Step 7

Loop finished.

Return:

return prefix;

Result:

"fl"
How this matches your idea

Your idea was:

flower
flow
^^^^
common = flow

flow
flight
^^
common = fl

The code does exactly the same thing.

The difference is:

Your approach

Compare characters manually.
Count matches.

This approach

Start with a candidate prefix.
Keep removing characters from the end until it matches.
What find() is doing

Example:

string s = "flight";

s.find("fl");

returns:

0

because "fl" begins at index 0.

s.find("li");

returns:

1

because "li" begins at index 1.

s.find("xyz");

returns:

string::npos

because it's not found.

That's why we check:

find(prefix) != 0

We specifically want the prefix to start at position 0.

Personally, I think the character-by-character approach you were trying is easier to understand for beginners:

(code written above)

This is much closer to the logic you were already building in your head:

compare chars
count matches (j)
keep only matching part
move to next string

I suspect if you study this version, you'll recognize it as almost exactly what you were trying to write.
*/ 
