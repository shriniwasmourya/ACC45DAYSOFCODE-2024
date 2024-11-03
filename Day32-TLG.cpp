#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cumulativeScore1 = 0, cumulativeScore2 = 0;
    int maxLead = 0, winner = 0;

    for (int i = 0; i < N; i++) {
        int S, T;
        cin >> S >> T;

        cumulativeScore1 += S;
        cumulativeScore2 += T;

        int currentLead = abs(cumulativeScore1 - cumulativeScore2);
        int currentLeader = (cumulativeScore1 > cumulativeScore2) ? 1 : 2;

        if (currentLead > maxLead) {
            maxLead = currentLead;
            winner = currentLeader;
        }
    }

    cout << winner << " " << maxLead << endl;
    return 0;
}