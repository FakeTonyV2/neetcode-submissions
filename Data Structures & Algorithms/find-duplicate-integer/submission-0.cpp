class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> set {};

        for (int n : nums) {
            if (set.contains(n)) {
                return n;
            }
            else {
                set.insert(n);
            }
        }
        
    }
};
