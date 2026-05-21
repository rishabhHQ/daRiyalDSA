//   1,  121, 12321,1234321

#include <iostream>
using namespace std;

int main () {
    
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        for(int j=1; j<=i; j++) {
            cout << j;
        }
        for(int j =1; j<=i-1; j++) {
            cout << i-j;
        }
        cout << endl;
    }

return 0;
}

// this is only khatarnaak in look rest it is too easy