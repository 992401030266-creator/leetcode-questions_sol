class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int k = 1;
        int c = 0;

       
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0)
                k *= nums[i];
            else
                c++;
        }

        vector<int> v(n, 0);

        
        for (int i = 0; i < n; i++) {
            if (c > 1) {
                
                v[i] = 0;
            }
            else if (c == 1) {
               
                if (nums[i] == 0)
                    v[i] = k;
                else
                    v[i] = 0;
            }
            else {
                
                v[i] = k / nums[i];
            }
        }

        return v;
    }
};
