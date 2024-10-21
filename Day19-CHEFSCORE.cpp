#include <iostream>
using namespace std;

string score(int n, int x, int y) {
    if (y % x == 0 && y <= n * x) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        cout << score(n, x, y) << endl;
    }
    
    return 0;
}