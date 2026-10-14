class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
          int n = grid.size();
        int doubleVal = 0, missing = 0;

        for (int num = 1; num <= n * n; num++) {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == num) {
                        cnt++;
                    }
                }
            }

            if (cnt == 2) {
                doubleVal = num;
            } else if (cnt == 0) {
                missing = num;
            }
        }

        return {doubleVal, missing};
    }
};