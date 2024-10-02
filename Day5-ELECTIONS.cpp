#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int P1 , P2 , P3;
        cin>>P1 >> P2 >> P3;  
        
        if(P1>50){
            cout<<"A\n";
        }else if(P2>50){
            cout<<"B\n";
        }else if(P3>50){
            cout<<"C\n";
        }else{
            cout<<"NOTA\n";
    }}

    return 0;
}