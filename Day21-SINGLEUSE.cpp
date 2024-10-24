#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y;
        
        if (Y >= H) {
            cout << 1 << endl;
            continue;
        }
        
        H -= Y;
        int attacks = ceil((double)H / X) + 1;
        cout << attacks << endl;
    }
    return 0;
}
