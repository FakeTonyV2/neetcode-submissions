class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int length = nums.size();
        sort(nums.begin(), nums.end());

        for (int a = 0; a < length - 2; a++) {
            if (a > 0 && nums[a] == nums[a - 1]) {
                continue;
            }
            int b = a + 1;
            int c = length - 1;

            while (b < c) {
                int dif = nums[a] + nums[b] + nums[c];

                if (dif > 0) {
                    c--;
                }
                else if (dif < 0) {
                    b++;
                }
                else {
                    res.push_back({nums[a], nums[b], nums[c]});
                    while (b < c && nums[b] == nums[b + 1]) {
                        b++;
                    }
                    while (b < c && nums[c] == nums[c - 1]) { 
                        c--;
                    }
                    b++;
                    c--;
                }
            }
        }

        return res;
    }
};
