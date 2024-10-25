#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coefficients(n + 1);

    for (int i = 0; i <= n; i++) {
        cin >> coefficients[i];
    }

    // Find the highest degree with a non-zero coefficient
    int degree = n;
    while (degree >= 0 && coefficients[degree] == 0) {
        degree--;
    }

    cout << degree << endl;
    return 0;
}