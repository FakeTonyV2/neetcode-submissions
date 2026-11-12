class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // 2 Loops
        unordered_set<int> m(nums.begin(), nums.end());
        int longest = 0;
        int curr = 0;
        for (int num : nums) {
            curr = 0;
            int num_curr = num;
            while (m.find(num_curr) != m.end()) {
                curr++;
                num_curr++;
            }
            longest = max(curr, longest);
        }

        return longest;
    }
};
