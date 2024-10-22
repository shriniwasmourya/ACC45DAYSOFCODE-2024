#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d ;  
        
        if( a == 1 || b == 1 || c == 1 || d == 1){
            std::cout << "OUT" << std::endl;
        }else{
            cout<<"IN\n";
        }
        
        
      
    }

    return 0;
}