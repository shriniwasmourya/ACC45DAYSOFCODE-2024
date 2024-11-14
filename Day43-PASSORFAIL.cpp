#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N, X ,P;
        cin >> N >> X >>P;  
        
        int rem = N-X;
        
        if((X*3)-rem >= P){
            cout<<"PASS\n";
        }else{
            cout<<"FAIL\n";
        }
      
    }

    return 0;
}