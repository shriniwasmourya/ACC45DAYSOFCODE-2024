#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N, X;
        cin >> N >> X;  
        // int diff = 
        if(X==N ||X==0||N==0){
            cout<<0<<endl;
        }else{
            if(X<=(N/2)){
                cout<<X<<endl;
            }else {
                cout << N - X << endl; 
            }
        }
      
    }

    return 0;
}