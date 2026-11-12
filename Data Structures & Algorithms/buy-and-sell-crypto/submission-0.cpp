class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = prices[0];
        int high = low;
        int maxProfit = high - low;
        int size = prices.size();
        for (int i = 0; i < size; i++) {
            if (prices[i] > high) {
                high = prices[i];
            }
            if (prices[i] < low || i == size - 1) {
                int profit = high - low;

                if (profit > maxProfit) {
                    maxProfit = profit;
                }
                low = prices[i];
                high = prices[i];
            }
        }

        return maxProfit;
    }
};
