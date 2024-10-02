#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int B1 , B2 , B3;
        cin>>B1 >> B2 >> B3;  
        
       if(B1 == 0 && B2 ==0 ){
           cout<<"Water filling time\n";
       }else if(B2 == 0&& B3==0){
           cout<<"Water filling time\n";
       }else if(B1==0 && B3 == 0){
           cout<<"Water filling time\n";
       }else{
           cout<<"Not now\n";
       }
    }

    return 0;
}