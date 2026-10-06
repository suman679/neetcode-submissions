class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> store;
        for (int i = 1; i <= n; i++) store.insert(i);

        for (int num : nums) {
            store.erase(num);
        }

        vector<int> result(store.begin(), store.end());
        return result;
    }
};