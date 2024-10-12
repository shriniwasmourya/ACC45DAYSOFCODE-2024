#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N, K,M;
        cin >> N >> K >>M;  
        
        cout<<((N+(K*M-1))/(K*M))<<endl;
      
    }

    return 0;
}