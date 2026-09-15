class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int maxRight = -1;

        for (int i = arr.size() - 1; i >= 0; i--) {

            int current = arr[i];

            arr[i] = maxRight;

            maxRight = max(maxRight, current);
        }

        return arr;
    }
};