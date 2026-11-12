class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int n = r;
        while (l <= r) {
            int m = (r - l) / 2 + l;
    
            if (nums[m] == target) {
                return m;
            }

            int sort = -1;

            if (nums[l] < nums[m]) {
                sort = 0;
                if (target >= nums[l] && target <= nums[m]) {
                    r = m - 1;
                    continue;
                }
                l = m + 1;
            } else {
                sort = 1;
                if ((target >= nums[m] && target <= nums[r]) || m == l) {
                    l = m + 1;
                    continue;
                }
                r = m - 1;
            }


        }

        return -1;
    }
};
