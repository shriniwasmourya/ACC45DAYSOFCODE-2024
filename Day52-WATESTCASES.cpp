#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> S(N);
        for (int i = 0; i < N; i++) {
            cin >> S[i];
        }
        string V;
        cin >> V;

        int min_size = INT_MAX;
        for (int i = 0; i < N; i++) {
            if (V[i] == '0') {
                min_size = min(min_size, S[i]);
            }
        }
        cout << min_size << endl;
    }
    return 0;
}