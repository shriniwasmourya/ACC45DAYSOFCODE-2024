#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;
        
        int odd_count = (N + 1) / 2;
        int even_count = N / 2;
        
        int total_duration = (odd_count * B) + (even_count * A);
        
        cout << total_duration << endl;
    }
    return 0;
}