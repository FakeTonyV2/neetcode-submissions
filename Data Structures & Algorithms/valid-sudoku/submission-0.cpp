#include <vector>
#include <unordered_set>
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> h(board.size());
        vector<unordered_set<char>> v(board.at(1).size());
        vector<unordered_set<char>> c(9);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char curr_char = board.at(i).at(j);
                if (curr_char == '.') {
                    continue;
                }
                if (h.at(i).count(curr_char)) {
                    //cout << "h: " << curr_char;
                    return false;
                }
                h.at(i).insert(curr_char);
                if (v.at(j).count(curr_char)) {
                   //cout << "v: " << curr_char;
                   return false;
                }
                v.at(j).insert(curr_char);
                int cube_location = i/3 * 3 + j/3;
                if (c.at(cube_location).count(curr_char)) {
                    //cout << "c: " << curr_char;
                    return false;
                }
                c.at(cube_location).insert(curr_char);
                // (0, 0) (0, 1) (0, 2)     // (0, 3) (0, 4) (0, 5)
                // (1, 0) (1, 1) (1, 2)
                // (2, 0) (2, 1) (2, 2)
                
                // (3, 0) (3, 1) (3, 2)

            }
        }
        return true;

        // Hash table for each value we've found and where. Maybe a Pair?
        // The pair contains the index
        // We could do a hashset for each of the maller squares? 
        // When we make the squares if we find a value, then false?
        // That then leaves how to check horizontal or veretical. I'm considering making this matrices
        // Which means 
        // 3 Hash sets? 
        // One horizontal, one vertical, and some way to keep up with the cube
        // The question is how to compare with the cube?
        // Do we make a pattern and if so what?
        // The third Hashset, we add to 
        // Three arrays of hashsets
        // 9 Hashsets Horizonatal
        // 9 HAshsets Vertical
        // 9 hassets cubes
        // With the cube hashset how do we determing which hashset to test. 
        // (0, 1) (Divide by 3 horizontal and vertical and add together to find proper index? and use the output.)
    }
};
