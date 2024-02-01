class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(n%3) return {};

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans(n/3, vector<int>(3));

        for(int i = 0; i<n; i+=3) {
            if(nums[i + 2] - nums[i] > k) return {};
            ans[i/3][0] = nums[i];
            ans[i/3][1] = nums[i+1];
            ans[i/3][2] = nums[i+2];
        }

        return ans;
    }
};