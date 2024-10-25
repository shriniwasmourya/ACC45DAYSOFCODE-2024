#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        // Read the array elements
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Count the frequency of each element
        unordered_map<int, int> frequency;
        for (int num : arr) {
            frequency[num]++;
        }

        // Find the maximum frequency
        int max_freq = 0;
        for (const auto& pair : frequency) {
            max_freq = max(max_freq, pair.second);
        }

        // Minimum removals to make all elements the same
        int min_removals = n - max_freq;
        cout << min_removals << endl;
    }

    return 0;
}
