#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        if (N % 4 == 0 && N > 0)
            cout << "Good" << endl;
        else
            cout << "Not Good" << endl;
    }
    
    return 0;
}