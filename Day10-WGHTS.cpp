#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int w,x,y,z;
        cin>>w>>x>> y >> z;  
        
        if(w==x){
            cout<<"YES\n";
        }else if(w==y){
            cout<<"YES\n";
        }else if(w==z){
            cout<<"YES\n";
        }else if(w==x+y){
            cout<<"YES\n";
        }else if(w==x+z){
            cout<<"YES\n";
        }else if(w==y+z){
            cout<<"YES\n";
        }else if(w==y+z+x){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
      
    }

    return 0;
}