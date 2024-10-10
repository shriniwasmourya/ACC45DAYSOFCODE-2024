#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N; // Number of cards
        cin >> N;
        
        vector<int> A(N);
        unordered_map<int, int> freq;
        
        // Read the cards and calculate frequencies
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            freq[A[i]]++;
        }
        
        // Find the maximum frequency
        int max_frequency = 0;
        for (auto it : freq) {
            max_frequency = max(max_frequency, it.second);
        }
        
        // Minimum moves required
        int result = N - max_frequency;
        
        // Output the result
        cout << result << endl;
    }
    
    return 0;
}