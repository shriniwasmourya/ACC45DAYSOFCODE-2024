#include <iostream>
#include <string>

/*Successfully run Codechef Environment*/

using namespace std;

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

bool isEasyToPronounce(const string &s) {
    int consonant_count = 0;

    for (char ch : s) {
        if (isVowel(ch)) {
            consonant_count = 0; // Reset the count when a vowel is found
        } else {
            consonant_count++; 
            if (consonant_count >= 4) {
                return false; // Hard to pronounce if 4 or more consonants in a row
            }
        }
    }
    return true; // Easy to pronounce if no such sequence found
}

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N;
        cin >> N; 
        string S;
        cin >> S; 

        if (isEasyToPronounce(S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
