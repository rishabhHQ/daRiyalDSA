//    *,  **, ***,****

#include <iostream>
using namespace std;

int main () {
    
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        for(int j =1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }

return 0;
}

// needs revision as 1st new concept after so many patterns and it has starting with gaps
// took help so when doing revision it shoulf be done again starting from skratch