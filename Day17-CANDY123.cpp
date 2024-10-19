#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        int limak_candies = 0, bob_candies = 0, turn = 1;

        while (true) {
            if (turn % 2 == 1) {
                if (limak_candies + turn > A) {
                    cout << "Bob" << endl;
                    break;
                }
                limak_candies += turn;
            } else {
                if (bob_candies + turn > B) {
                    cout << "Limak" << endl;
                    break;
                }
                bob_candies += turn;
            }
            turn++;
        }
    }
    return 0;
}
