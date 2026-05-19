// 1,23,345,4567

#include <iostream>
using namespace std;

int main () {
    // int count = 1;
    for(int i=1; i<=4; i++) {
        for(int j=1; j<=i; j++) {
            cout << j+i-1 << " ";
            // count = count +1;
        }
        cout << endl;
    }

return 0;
}