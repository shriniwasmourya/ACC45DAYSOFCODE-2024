#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N, X;
        cin >> N >> X;  
        
        
      if((N+1)/2<=X){
          cout<<"YES\n";
      }else{
          cout<<"NO\n";
      }
    }

    return 0;
}