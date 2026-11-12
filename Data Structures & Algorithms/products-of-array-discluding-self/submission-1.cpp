class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Some iniitials thoughts are we find the product of all the vaulues and then divide by each value at the index
        int prev_left = 1;
        int prev_right = 1;
        queue<int> left;
        left.push(prev_left);
        stack<int> right;
        right.push(prev_right);
        int len = nums.size();
        vector<int> output(len);
        //cout << "L:" << prev_left << "\n";
        //cout << "R:" << prev_right << "\n";
        for (int i = 0; i < len - 1; i++) {
            prev_left *= nums.at(i);
            prev_right *= nums.at(len - 1 - i);
            //cout << "L:" << prev_left << "\n";
            //cout << "R:" << prev_right << "\n";
            left.push(prev_left);
            right.push(prev_right);
        }
        for (int i = 0; i < len; i++) {
            output[i] = left.front() * right.top();
            //cout << "LT:" << left.front() << "\n";
            //cout << "RT:" << right.top() << "\n";
            left.pop();
            right.pop();
        }

        return output;
    }
};

// A list of numbers used in every operation

// 1 2 3 4 5 6 7
// | 2 6 24 120 720 5040 | 60 |
// 1 | 3 12 60 360 2520 | 30 |
// 1 2 | 8  40 240 1680 | 20 |
// 1 2 6 | 30 180 1260  | 15 | 315
// 1 2 6 24 | 144 1008  | 12 | 252
// 1 2 6 24 120 | 840   | 10 | 210
// 1 2 6 24 120 720 |
// 1 2 3 4 10 12 84

// I would make an array of size n - 1. Multiply every value and then move on, replacing each value everytime I go right.
// Would we make a stack 
// For O(N) we want trhe product
// We want two stacks of product and we multiplky each. 
// Stack 1 would be: 
// 1 1 2 6 24 120 720 
// Stack 2 wouldbe:
// 1 7 42 210 840 2520 5040

// Do we use two stacks?
// One left and one right.

