#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        string gestures;
        cin >> gestures;

        bool isIndian = false;
        bool isNotIndian = false;

        for (char c : gestures) {
            if (c == 'I') {
                isIndian = true;
            } else if (c == 'Y') {
                isNotIndian = true;
            }
        }

        if (isIndian) {
            cout << "INDIAN" << endl;
        } else if (isNotIndian) {
            cout << "NOT INDIAN" << endl;
        } else {
            cout << "NOT SURE" << endl;
        }
    }

    return 0;
}