#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int first_pair = max(a, b);
        int second_pair = max(c, d);

        cout << first_pair + second_pair << endl;
    }
    return 0;
}