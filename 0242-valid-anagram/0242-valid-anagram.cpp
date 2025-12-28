class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>mpps;
        unordered_map<char,int>mppt;
        for(int i=0;i<s.size();i++) {
            mpps[s[i]]++;
            mppt[t[i]]++;
        }
        for(auto it:mpps){
            char c=it.first;
            if(mpps[c]!=mppt[c]) return false;
        }
        return true;
    }
};