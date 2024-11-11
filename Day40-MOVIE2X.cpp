#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int timeSpent = (Y / 2) + (X - Y);
    cout << timeSpent << endl;

    return 0;
}