class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        // Step 1: take first k cards from left
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }

        int ans = sum;

        // Step 2: replace left cards with right cards
        int right = n - 1;

        for (int left = k - 1; left >= 0; left--) {
            sum -= cardPoints[left];   // remove from left
            sum += cardPoints[right];  // add from right
            right--;

            ans = max(ans, sum);
        }

        return ans;
    }
};
