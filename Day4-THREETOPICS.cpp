#include <iostream>
using namespace std;

int main() {
    int A,B,C,X;
    cin >>A>>B>>C>>X;
    
    if(X==A || X==B || X==C){
        std::cout << "YES" << std::endl;
    }else{
        cout<<"NO";
    }

    return 0;
}