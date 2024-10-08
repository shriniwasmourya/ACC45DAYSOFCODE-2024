#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        cout << abs(Y - X) << endl;
    }
    return 0;
}