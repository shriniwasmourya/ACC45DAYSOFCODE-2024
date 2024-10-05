#include <iostream>
#include <string>

using namespace std;

int strStr(const string& haystack, const string& needle) {
    if (needle.empty()) return 0;
    int haystackLength = haystack.size();
    int needleLength = needle.size();
    for (int i = 0; i <= haystackLength - needleLength; ++i) {
        if (haystack.substr(i, needleLength) == needle) {
            return i;
        }
    }
    return -1;
}

int main() {
    string haystack, needle;
    cout << "Enter the haystack: ";
    cin >> haystack;
    cout << "Enter the needle: ";
    cin >> needle;
    int result = strStr(haystack, needle);
    cout << "The index of the first occurrence of needle in haystack is: " << result << endl;
    return 0;
}