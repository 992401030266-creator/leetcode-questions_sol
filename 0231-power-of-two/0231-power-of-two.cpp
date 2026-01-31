class Solution {
public:
    bool isPowerOfTwo(int n) {
    
        if (n==1) return true;
        long long k=2;
        while(k<=n){
            if(k==n)return true;
            else k=k*2;
        }
        return false;
    

    }
};