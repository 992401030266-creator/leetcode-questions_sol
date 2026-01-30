class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n==1) return true;
        long long k=3;
        while(k<=n){
            if(k==n)return true;
            else k=k*3;
        }
        return false;
    }
};