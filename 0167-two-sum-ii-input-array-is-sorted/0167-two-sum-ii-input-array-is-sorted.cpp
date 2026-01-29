class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        vector<int>v;
        int r=numbers.size()-1;
    
        while(l<r){
            int sum=numbers[l]+numbers[r];
            if(sum==target){
              v.push_back(l+1);
              v.push_back(r+1);

              return v;
            }
            else if(sum<target){
                l++;
            }
            else if(sum>target)
            r--;

        }return v;

        
        
    }
};