#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int operations = 0;

        while (X < 2 * Y && Y < 2 * X) {
            if (X < Y) {
                X++;
            } else {
                Y++;
            }
            operations++;
        }

        cout << operations << endl;
    }

    return 0;
}