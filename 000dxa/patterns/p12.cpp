// ABC,ABC,ABC

#include <iostream>
using namespace std;

int main () {
    
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            // cout << 'A'+j-1 << " ";  // this will print only ASKII values
            
           char ch = 'A' + j -1;
           cout << ch << " "; 
        }
        cout << endl;
    }

return 0;
}