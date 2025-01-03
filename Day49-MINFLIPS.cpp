#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        int sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            sum += A[i];
        }
        if (abs(sum) % 2 != 0) {
            cout << -1 << endl;
        } else {
            cout << abs(sum) / 2 << endl;
        }
    }
    return 0;
}