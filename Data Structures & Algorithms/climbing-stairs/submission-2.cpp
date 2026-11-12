class Solution {
public:
    int climbStairs(int n) {
        vector<int>store(n, 0);
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
        store[0] = 1;
        store[1] = 2;


        for (int i = 2; i < n; i++) {
            store[i] = store[i - 1] + store[i - 2];
        }

        cout << "End" << "\n";

        return store[n - 1];
    }
};
