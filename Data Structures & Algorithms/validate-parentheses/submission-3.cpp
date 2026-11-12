class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> store;
        if (n % 2 == 1) {
            return false;
        }
        for (int i = 0; i < n; i++) {
            char curr = s[i];
            //cout << "Curr: " << curr << "\n";
            if (curr == '(' || curr == '[' || curr == '{') {
                store.push(curr);
                continue;
            }
        
            if (store.size() == 0) {
                return false;
            }
            char front = store.top();

            
            if (front == '(' && curr == ')'){
                store.pop();
                continue;
            } else if (front == '{' && curr == '}'){
                store.pop();
                continue;
            } else if (front == '[' && curr == ']'){
                store.pop();
                continue;
            }
            return false;
        }

        if (store.size() == 0) {
            return true;
        }

        return false;
    }
};
