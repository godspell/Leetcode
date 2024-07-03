class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n < 5) return 0;
        sort(nums.begin(), nums.end());
        int a = nums[n-1] - nums[3];
        int b = nums[n-2] - nums[2];
        int c = nums[n-3] - nums[1];
        int d = nums[n-4] - nums[0];
        int ans = min({a, b, c, d});
        return ans;
    }
};