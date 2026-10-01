class Solution {
public:
    int findLucky(vector<int>& arr) {
         int res = -1;

        for (int num : arr) {
            int cnt = 0;
            for (int a : arr) {
                if (num == a) {
                    cnt++;
                }
            }
            if (cnt == num) {
                res = max(res, num);
            }
        }
        return res;
    }
};