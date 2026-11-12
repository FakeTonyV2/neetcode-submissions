#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> ust;
        
        for (int i = 0; i < nums.size(); i++) {
            if (ust.find(nums.at(i)) != ust.end()) {
                return true;
            } else {
                ust.insert(nums.at(i));
            }
        }
        return false;
        //Hash
    }
};