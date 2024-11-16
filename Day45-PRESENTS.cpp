#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        long long full_groups = N / 5;
        long long leftover = N % 5;
        long long coins = full_groups * 4 + leftover;
        cout << coins << endl;
    }
    return 0;
}