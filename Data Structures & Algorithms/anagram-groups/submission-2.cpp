#include <list>
#include <unordered_map>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        
        unordered_map<string, std::vector<string>> str_map;

        for (int i = 0; i < strs.size(); i++) {
            string s = strs.at(i);
            string s1 = s;
            std::sort(s.begin(), s.end());
            str_map[s].push_back(s1);
        }

        std::vector<vector<string>> output;
        output.reserve(str_map.size());
        
        for (auto const&[key, value] : str_map) {
            output.push_back(value);
        }
        

        return output;

    }
};

// Make a hashmap of a sorted string and a vector<string>
// If the sorted strign exists then add it to the vector;
// If the sorted strign doesn't exist add it and create the vector.
// Loop through all the existing values in the hashmap and fill the 2d vector with those vectors.
// return the output


// Would a hashmap of each value and their sorted partner work. And if the length matches we then check to see if the sorted match?