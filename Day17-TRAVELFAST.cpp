#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N, X;
        cin >> N >> X;  
        
        if(N<X){
            cout<<"BIKE\n";
        }else if(N>X){
            cout<<"CAR\n";
        }else if(N==X){
            cout<<"SAME\n";
        }
        
        
      
    }

    return 0;
}