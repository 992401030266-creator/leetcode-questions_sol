class Solution {
public:
    bool isPalindrome(int x) {
        long revn=0;
        int o=x;
        while(x>0){
        int a = x%10;
        revn=revn*10+a;
        x=x/10;
        

        }
        return revn==o;
        
    }
};