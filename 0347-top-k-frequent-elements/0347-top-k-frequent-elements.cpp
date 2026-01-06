class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        // Step 1: Count frequencies
        for (int x : nums) {
            mp[x]++;
        }

        // Step 2: Max heap (frequency, element)
        priority_queue<pair<int,int>> pq;
        for (auto it : mp) {
            pq.push({it.second, it.first});
        }

        // Step 3: Extract top k elements
        vector<int> result;
        while (k--) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};
