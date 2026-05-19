// A,BC,CDE,DEFJ

#include <iostream>
using namespace std;

int main () {
    
    int n;
    cin >> n;
    int count = 0;
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            
           char ch = 'A' + j + i - 2;
           cout << ch << " ";
           count++;
           
        }
        cout << endl;
    }

return 0;
}