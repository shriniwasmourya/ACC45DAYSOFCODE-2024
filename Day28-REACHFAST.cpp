#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, K;
        cin >> A >> B >> K;
        int distance = abs(B - A);
        int steps = (distance + K - 1) / K;
        cout << steps << endl;
    }
    return 0;
}