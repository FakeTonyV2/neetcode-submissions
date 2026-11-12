#include<unordered_map>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> map;
        for (int n : nums) {
            map[n]++;
        }

        // So we have the count of each character, but now we just need to 
        // 
        std::vector<pair<int, int>> temp;
        std::vector<int> output;
        for (auto pair : map){
            temp.push_back({pair.second, pair.first});
        }
        sort(temp.begin(), temp.end());
        int len = temp.size();
        for (int i = len - k; i < len; i++) {
            output.push_back(temp[i].second);
        }
        return output;
    }
};
