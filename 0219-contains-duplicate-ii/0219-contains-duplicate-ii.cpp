class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastIndex;

        for (int i = 0; i < nums.size(); i++) {

            // seen before?
            if (lastIndex.count(nums[i])) {
                if (i - lastIndex[nums[i]] <= k)
                    return true;
            }

            // update last seen index
            lastIndex[nums[i]] = i;
        }
        return false;
    }
};
