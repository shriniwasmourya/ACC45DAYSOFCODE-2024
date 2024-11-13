#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        
        int min_price = min({A, B, C});
        int total_cost = A + B + C - min_price;
        
        cout << total_cost << endl;
    }
    return 0;
}