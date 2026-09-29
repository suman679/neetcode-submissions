class NumArray {
private:
    const vector<int>& nums;
public:
    NumArray(vector<int>& nums) : nums(nums) {
        
    }
    
    int sumRange(int left, int right) {
        int res =0;
        for(int i = left; i<= right; i++){
            res+=nums[i];
        }
        return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */