#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        string result = "";

        for (int i = 0; i < N; i += 2) {
            string pair = S.substr(i, 2);
            if (pair == "00") result += 'A';
            else if (pair == "01") result += 'T';
            else if (pair == "10") result += 'C';
            else if (pair == "11") result += 'G';
        }

        cout << result << endl;
    }
    return 0;
}