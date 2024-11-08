#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int minFlipsToZeroSum(vector<int>& A) {
    int sum = 0;
    for (int num : A) sum += num;

    if (sum % 2 != 0) return -1;
    return abs(sum / 2);
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        
        for (int i = 0; i < N; ++i) cin >> A[i];
        
        cout << minFlipsToZeroSum(A) << endl;
    }
    
    return 0;
}