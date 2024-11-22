#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int even_count = 0, odd_count = 0;

        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
                if (i % 2 == 0) even_count++;
                else odd_count++;
            }
        }

        if (even_count > odd_count) cout << 1 << endl;
        else if (even_count == odd_count) cout << 0 << endl;
        else cout << -1 << endl;
    }
    return 0;
}