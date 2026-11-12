class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> charSet;
        int l = 0;
        int output = 0;
        for (int i = 0; i < s.length(); i++) {
            if (charSet.find(s[i]) != charSet.end()) {
            output = max(output, i - l);
            while (charSet.find(s[i]) != charSet.end()) {
                charSet.erase(s[l]);
                l += 1;
            } 

            }
            charSet.insert(s[i]);
        }
        output = max<int>(output, s.length() - l);
        return output;
    }
};
