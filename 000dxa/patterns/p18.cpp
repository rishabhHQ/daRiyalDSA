// D,CD,BCD,ABCD

#include <iostream>
using namespace std;

int main () {
    
    int n;
    cin >> n;
    int count = 0;
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            
           char ch = 'D' + j - i;  // alternate: 'A' + n - i
           cout << ch << " ";
           count++;
           
        }
        cout << endl;
    }

return 0;
}

// needs revision this took maximum time among all