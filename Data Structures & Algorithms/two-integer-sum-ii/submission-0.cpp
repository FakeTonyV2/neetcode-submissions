class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len = numbers.size();
        int left = 0;
        int right = len - 1;
        while (1) {
            int sum = numbers.at(left) + numbers.at(right);
            if (sum == target) {
                break;
            } 
            if (sum > target) {
                right--;
            }
            else if (sum < target) {
                left++;
            }
        }
        return vector<int> {left + 1, right + 1};
    }
};
