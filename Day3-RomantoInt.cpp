#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s) {
    int total = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'I') {
            if (i < s.length() - 1 && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                total -= 1;
            } else {
                total += 1;
            }
        } else if (s[i] == 'V') {
            total += 5;
        } else if (s[i] == 'X') {
            if (i < s.length() - 1 && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                total -= 10;
            } else {
                total += 10;
            }
        } else if (s[i] == 'L') {
            total += 50;
        } else if (s[i] == 'C') {
            if (i < s.length() - 1 && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
                total -= 100;
            } else {
                total += 100;
            }
        } else if (s[i] == 'D') {
            total += 500;
        } else if (s[i] == 'M') {
            total += 1000;
        }
    }

    return total;
}

int main() {
    string romanNumeral;
    cout << "Enter a Roman numeral: ";
    cin >> romanNumeral;

    int result = romanToInt(romanNumeral);
    cout << "The integer value is: " << result << endl;

    return 0;
}
