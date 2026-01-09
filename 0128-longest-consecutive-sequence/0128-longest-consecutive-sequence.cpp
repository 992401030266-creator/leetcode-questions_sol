class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>st(nums.begin(),nums.end());
        int ans=0;
        for(auto x:st){
            
            if(st.find(x-1)==st.end()){
                int cur=x;
                int l=1;
                while(st.find(cur+1)!=st.end()){
                    cur++;
                    l++;
                }ans=max(ans,l);
            }
        }return ans;
    }
};