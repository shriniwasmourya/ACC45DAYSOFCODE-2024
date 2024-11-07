#include <iostream>
using namespace std;

int countTuesdays(int N) {
    if (N < 2) return 0;
    return 1 + (N - 2) / 7;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        cout << countTuesdays(N) << endl;
    }
    
    return 0;
}