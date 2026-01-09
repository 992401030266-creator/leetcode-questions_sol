class Solution {
public:
string clean(string s) {
    string res = "";

    for (char c : s) {
        if (isalnum(c)) {
            res += tolower(c);
        }
    }
    return res;
}

    bool isPalindrome(string s) {
        string o=clean(s);
        string rev=o;
        if(rev.size()==0) return true;
        int i=0;
        int j=rev.size()-1;
       while(i<j){
        swap(rev[i],rev[j]);
        i++;
        j--;
       }return (rev==o);
        
        
    }
};