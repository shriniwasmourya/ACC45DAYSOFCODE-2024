#include <iostream>
using namespace std;

int main() {
    int T;
    
    cin >> T;  

    while (T--) {
        int N, X;
        cin >> N >> X;
        int arr[N];
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        
        
        for(int i=0 ; i<N ; i++){
            
            
            if(arr[i] <= X){
                cout<<"1";
                X -= arr[i];
            }else{
                cout<<"0";
            }
        }cout<<endl;
        
        
      
    }

    return 0;
}