class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans = 0;
        long long curr = 1;
        int i = 0;

        while (i < prices.size()) {
            if (i > 0 && prices[i - 1] - prices[i] == 1) {
                curr++;
            } else {
                curr = 1;
            }
            ans += curr;
            i++;
        }
        return ans;
    }
};
