#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K, count = 0;
        cin >> N >> K;
        vector<int> minions(N);
        for (int i = 0; i < N; i++) {
            cin >> minions[i];
            if ((minions[i] + K) % 7 == 0) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}