class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // 2 Loops
        if (nums.size() == 0) {
            return 0;
        }
        std::sort(nums.begin(), nums.end());
        int max_consecutive = 1;
        int curr_consecutive = 1;
        // One to sort and then some counter to check what is the longest
        for (int i = 0; i < nums.size() - 1; i++) {
            //cout << nums.at(i) << " ";
            //int first = nums.at(i);
            //int second = nums.at(i + 1);
            if (nums.at(i) == nums.at(i + 1)) {
                continue;
            }
            if (nums.at(i) == nums.at(i + 1) - 1) {
                curr_consecutive++;
            }
            else {
                if (curr_consecutive > max_consecutive) {
                    max_consecutive = curr_consecutive;
                }
                curr_consecutive = 1; 
            }
        }
        if (curr_consecutive > max_consecutive) {
            max_consecutive = curr_consecutive;
        }
        return max_consecutive;
    }
};
