class Solution {
public:
    bool canJump(vector<int>& nums) {

        // You jump back 1 see if you can find 1 if so start over from there, and keep jumping back till you find a val that mathces the jumps
        // If you get to the start without being able to do that, it's false

        int goal = nums.size() - 1;
        
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (i + nums[i] >= goal) {
                goal = i;
            }
        }
        if (goal == 0) {
            return true;
        }

        return false;
        
    }
};
