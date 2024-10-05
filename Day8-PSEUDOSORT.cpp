#include <iostream>
#include <vector>
using namespace std;

bool isPseudoSorted(vector<int> A) {
    int N = A.size();
    int inversions = 0;
    
    for (int i = 0; i < N - 1; i++) {
        if (A[i] > A[i + 1]) {
            inversions++;
            if (inversions > 1)
                return false;
        }
    }

    if (inversions == 0) return true; 

    for (int i = 0; i < N - 1; i++) {
        if (A[i] > A[i + 1]) {
            swap(A[i], A[i + 1]);
            break;
        }
    }
    
    for (int i = 0; i < N - 1; i++) {
        if (A[i] > A[i + 1]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        if (isPseudoSorted(A))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}