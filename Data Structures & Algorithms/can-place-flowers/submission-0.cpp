class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        vector <int> f(flowerbed.size() + 2, 0);
        for(int i =0; i<flowerbed.size(); i++){
            f[i + 1] = flowerbed[i];
        }
        for (int i = 1; i < f.size() - 1; i++) {
            if (f[i - 1] == 0 && f[i] == 0 && f[i + 1] == 0) {
                f[i] = 1;
                n--;
            }
        }

    return n <= 0;
    }
};