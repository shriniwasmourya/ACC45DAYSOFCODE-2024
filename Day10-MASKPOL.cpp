#include <iostream>
#include<vector>
using namespace std;

int main() {
    int T;
    cin >> T;  
    vector<int> results;
    while (T--) {
         int N, A;
        cin >> N >> A;
        int uninfected = N - A; 
        
        int minMasks = min(A, uninfected);
        results.push_back(minMasks);
        
      
    }
     for (int ans : results) {
        cout << ans << endl;
    }

    return 0;
}