class Solution {
public:
    bool isPalindrome(int x) {
         long long rem , sum = 0;
        long long y=x;
        while(y>0){
        
            rem = y%10;
            sum = sum*10 + rem;
            cout<<sum<<" ";
            y /= 10;
        }

        if(x==sum){
            return true;
        }
        return false;

    }
};
