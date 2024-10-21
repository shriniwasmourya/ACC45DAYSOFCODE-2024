#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> P(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            cin >> P[i];
            freq[P[i]]++;
        }

        bool possible = true;
        for (auto it : freq) {
            if (it.second % it.first != 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}