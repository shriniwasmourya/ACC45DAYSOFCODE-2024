#include <iostream>
using namespace std;

int compare(int a_dsa, int a_toc, int a_dm, int b_dsa, int b_toc, int b_dm) {
    int totalA = a_dsa + a_toc + a_dm;
    int totalB = b_dsa + b_toc + b_dm;
    
    if (totalA > totalB) {
        return 1;
    } else if (totalA < totalB) {
        return -1;
    }
    
    if (a_dsa > b_dsa) {
        return 1;
    } else if (a_dsa < b_dsa) {
        return -1;
    }
    
    if (a_toc > b_toc) {
        return 1;
    } else if (a_toc < b_toc) {
        return -1;
    }

    return 0;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a_dsa, a_toc, a_dm;
        int b_dsa, b_toc, b_dm;
        
        cin >> a_dsa >> a_toc >> a_dm;
        cin >> b_dsa >> b_toc >> b_dm;
        
        int result = compare(a_dsa, a_toc, a_dm, b_dsa, b_toc, b_dm);
        
        if (result == 1) {
            cout << "Alice" << endl;
        } else if (result == -1) {
            cout << "Bob" << endl;
        } else {
            cout << "Tie" << endl;
        }
    }

    return 0;
}
