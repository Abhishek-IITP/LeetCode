class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int index = size - k;

        return nums[index];
    }
};