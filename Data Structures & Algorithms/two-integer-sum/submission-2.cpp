#include <unordered_map>
#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        int len = nums.size();
        for (int i = len - 1; i > -1; i--) {
            map.insert({nums.at(i), i});
        }
        for (int i = 0; i < len; i++) {
            int leftover = target - nums.at(i);
            if (map.count(leftover) > 0) {
                if (map.at(leftover) == i) {
                    continue;
                }
                return std::vector<int> {i, map.at(leftover)};
            }
        }
    }
};

// Right idea. 


