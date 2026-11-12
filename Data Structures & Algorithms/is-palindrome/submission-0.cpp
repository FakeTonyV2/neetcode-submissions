class Solution {
public:
    bool isPalindrome(string s) {
        // String Length and move back compare to see if the two strings are equal.
        // If not equal, return false.
        s.erase(remove_if(s.begin(), s.end(), 
            [](unsigned char c) { return !std::isalpha(c) && !isdigit(c); }), 
            s.end());
        for (auto& c : s) {
            c = tolower(static_cast<unsigned char>(c));
        }
        //out << s;
        int len = s.size();
        int left = 0;
        int right = len - 1;

        for (int i = 0; i < len/2; i++) {
            if (s.at(left) != s.at(right)) {
                //cout << " " << s.at(left) << " " << s.at(right);
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
