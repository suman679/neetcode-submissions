class Solution {
public:
    bool find132pattern(vector<int>& nums) {
         vector<int> stack(nums.size());
        int top = 0, middle = -1000000001;
        for (int i = (int)nums.size()-1; i >= 0; i--) {
            int x = nums[i];
            if (x < middle) return true;
            while (top > 0 && stack[top-1] < x) middle = stack[--top];
            stack[top++] = x;
        }
        return false;
        
    }
};
