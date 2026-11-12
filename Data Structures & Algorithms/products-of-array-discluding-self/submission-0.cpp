class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Some iniitials thoughts are we find the product of all the vaulues and then divide by each value at the index
        int product = 1;
         int len = nums.size();
        vector<int> output(len, 1);
        // for (int i : nums) {
        //     product *= i;
        // }
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                if (j != i) {
                    output[i] *= nums.at(j);
                }
            }
        }

        return output;
    }
};

// 2 4 6 48
// 1 4 6 24
// 1 2 6 12
// 1 2 4 8

// Do we use two stacks?
// One left and one right.

