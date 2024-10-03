#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N, X;
        cin >> N >> X; 
        
        // Check for valid input for N
        if (N <= 0) {
            cout << X << endl; // If N is 0 or less, the maximum is just the initial number of people
            continue; // Skip to the next test case
        }

        vector<int> arr(N); // Using vector for dynamic size
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        } 
        
        int currentPeople = X;
        int maxPeople = X; // Initialize maxPeople to the initial number of people

        for (int i = 0; i < N; i++) {
            currentPeople += arr[i]; // Update current number of people
            
            // Update maxPeople if currentPeople exceeds it
            if (currentPeople > maxPeople) {/*  */
                maxPeople = currentPeople;
            }
        }
        cout << maxPeople << endl;
    }
return 0;
        
}