class Solution {
public:
    int lengthOfLastWord(string s) {
        
        if(s.size()==0) return 0;
        int i=s.size()-1;
        int c=0;
        while(i>=0 && s[i]==' ')
        i--;
        while(i>=0 && s[i]!=' ')
        {c++; i--;}
        return c;

    }
};