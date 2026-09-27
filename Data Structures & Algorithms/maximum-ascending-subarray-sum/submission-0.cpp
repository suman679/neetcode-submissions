class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
         int res = nums[0], curSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1]) {
                curSum = 0;
            }
            curSum += nums[i];
            res = max(res, curSum);
        }

        return res;
    }
};