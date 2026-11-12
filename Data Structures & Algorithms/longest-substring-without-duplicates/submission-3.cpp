class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        int n = s.length();
        queue<char> store;
        set<char> past;

        for (int i = 0; i < n; i++) {
            if (past.find(s[i]) != past.end()) {
                if (max < store.size()) {
                    max = store.size();
                }

                while (true) {
                    char top = store.front();
                    store.pop();
                    past.erase(top);
                    if (top == s[i]) {
                        break;
                    }
                }
            }
            past.insert(s[i]);
            store.push(s[i]);
        }

        if (max < store.size()) {
             max = store.size();
        }

        return max;

    }
};
