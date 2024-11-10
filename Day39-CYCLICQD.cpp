#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N, X , C ,D;
        cin >> N >> X >>C>>D; 
        
        if(N+C == 180 && X+D == 180){
            cout<<"Yes\n";
        }else{
            cout<<"NO\n";
        }
        
        
      
    }

    return 0;
}