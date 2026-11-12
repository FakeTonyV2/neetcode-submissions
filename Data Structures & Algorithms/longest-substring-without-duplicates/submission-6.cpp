class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int l = 0;
        int output = 0;
        
        for (int i = 0; i < s.length(); i++) {
            // Shrink window from the left until the duplicate s[i] is removed
            while (charSet.find(s[i]) != charSet.end()) {
                charSet.erase(s[l]);
                l++;
            }
            
            // Add current character
            charSet.insert(s[i]);
            
            // Current window [l...i] is guaranteed to be valid
            output = max(output, i - l + 1);
        }
        
        return output;
    }
};