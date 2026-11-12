class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        if (words.size() < 2) {
            return true;
        }

        unordered_map<char, int> alphabet_order;
        int first = 0;
        int second = 1;
        int n = words.size();

        for (int i = 0; i < order.size(); i++)
        {
            alphabet_order[order.at(i)] = i;
        }

        while (second < n) {
            string first_str = words[first];
            string second_str = words[second];
            int cmp_range = first_str.size();
            int second_range = second_str.size();
            for (int i = 0; i < cmp_range; i++) {
                if (i >= second_range) {
                    return false;
                }

                int let_1 = alphabet_order[first_str[i]];
                int let_2 = alphabet_order[second_str[i]];
                if (let_1 == let_2) {
                    continue;
                }
                
                if (let_1 < let_2) {
                    break;
                }

                if (let_1 > let_2) {
                    return false;
                }
            
            }
            cout << "test\n" ;

            first++;
            second++;
        }

        cout << "test2\n";

        return true;

    }
};