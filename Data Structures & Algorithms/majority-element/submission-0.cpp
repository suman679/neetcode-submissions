class Solution {
public:
    int majorityElement(vector<int>& nums) {
          int n = nums.size();
        for (int num : nums) {
            int count = 0;
            for (int i : nums) {
                if (i == num) {
                    count++;
                }
            }
            if (count > n / 2) {
                return num;
            }
        }
        return -1;
    }
};