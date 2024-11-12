#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int total_buckets = X / Y;
        int max_people = total_buckets / 2;

        cout << max_people << endl;
    }

    return 0;
}