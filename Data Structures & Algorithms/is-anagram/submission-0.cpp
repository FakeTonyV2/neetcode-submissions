#include<algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int i = 0; i < t.length(); i++) {
            if (s.at(i) != t.at(i)) {
                return false;
            }
        }
        return true;
        // Do we make a tree of s? but the removal of each character is way too inefficaent?
        // the core challenge is keeping count of the number of each character
        // We could have double looped and remove each character
        // create arrays that are sorted for both and if every value is not the same we have an issue,    
    }
};
