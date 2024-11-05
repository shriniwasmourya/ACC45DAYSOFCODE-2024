#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B;
        cin >> A >> B;
        
        int C = 21 - (A + B);
        
        if (C >= 1 && C <= 10)
            cout << C << endl;
        else
            cout << -1 << endl;
    }
    
    return 0;
}