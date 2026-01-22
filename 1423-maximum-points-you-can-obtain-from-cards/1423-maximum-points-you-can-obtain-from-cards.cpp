class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int>v;
        for(int i=k-1;i>=0;i--){
            v.push_back(cardPoints[i]);
        }
        int n=cardPoints.size()-1;
        int j=cardPoints.size()-k;
        for(int i=n;i>=j;i--){
            v.push_back(cardPoints[i]);
        }

int sum=0;
for(int i=0;i<k;i++){
    sum+=v[i];
}
int ans=sum;
for(int i=k;i<v.size();i++){
    sum += v[i];        // add new
        sum -= v[i - k];    // remove old
        ans = max(ans, sum);
}
return ans;


        }
        
    };