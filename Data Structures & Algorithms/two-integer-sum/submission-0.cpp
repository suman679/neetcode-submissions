class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int>mp;
        for(int i=0;i<nums.size();i++){
            int neded = target - nums[i];
            if(mp.find(neded) != mp.end()){
                return {mp[neded], i};
            }
            mp[nums[i]] = i;
        }
        return{};
    }
};
