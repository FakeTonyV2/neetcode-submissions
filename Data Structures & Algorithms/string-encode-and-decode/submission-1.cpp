#include<sstream>
class Solution {
public:

    string encode(vector<string>& strs) {
        string output = "";
        for (string s : strs) {
            int len = s.size();
            if (len == 0) {
                output += "-1";
            } 
            else {
                for (size_t i = 0; i < len; i++) {
                    output += ~(s[i]);
                }
            }
            output += " ";
        }
        output = output.substr(0, output.size() - 1);
        return output;
    }

    vector<string> decode(string s) {
        
        stringstream ss(s);
        string word;
        vector<string> output;
        while (ss >> word) {
        
            if (word == "-1") {
                output.push_back("");
            } else {
                for (size_t i = 0; i < word.size(); i++) {
                    word[i] = ~word[i];
                }
                output.push_back(word);
            }
        }
        return output;
    }
};
