class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> count;
        for(int num : nums){
            count[num]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b){
                if(count[a] != count[b]) return count[a] < count[b];
                return a > b;
        });
        return nums;
    }
};