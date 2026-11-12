class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> store;
        unordered_map<char, char> closeToOpen = { {'}', '{'}, {']', '['}, {')', '('} };
        if (n % 2 == 1) {
            return false;
        }
        for (int i = 0; i < n; i++) {
            char curr = s[i];
            if (closeToOpen.find(curr) != closeToOpen.end()) {
                if (store.size() == 0) {
                    cout << "1";
                    return false;
                }
                if (closeToOpen[curr] == store.top()) {
                    store.pop();
                    continue;
                } else {
                    cout << "2";
                    return false;
                }
            }
            store.push(curr);
        }

        if (store.size() == 0) {
            return true;
        }

        return false;
    }
};
