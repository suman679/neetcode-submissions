class Solution {
public:
    bool divideArray(vector<int>& nums) {
         int N = nums.size();
        sort(nums.begin(), nums.end());

        int i = 0;
        while (i < N) {
            int j = i;
            while (j < N && nums[i] == nums[j]) {
                j++;
            }

            if ((j - i) % 2 != 0) {
                return false;
            }

            i = j;
        }

        return true;
    }
};