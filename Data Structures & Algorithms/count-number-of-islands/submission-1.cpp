
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int islands = 0;

        // Up, right, down, left
        int directions[5] = {-1, 0, 1, 0, -1};

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] != '1') continue;

                islands++;

                queue<pair<int, int>> q;
                q.push({r, c});
                grid[r][c] = '0';

                while (!q.empty()) {
                    auto [x, y] = q.front();
                    q.pop();

                    for (int d = 0; d < 4; d++) {
                        int nx = x + directions[d];
                        int ny = y + directions[d + 1];

                        if (nx < 0 || nx >= rows ||
                            ny < 0 || ny >= cols ||
                            grid[nx][ny] != '1') {
                            continue;
                        }

                        grid[nx][ny] = '0';
                        q.push({nx, ny});
                    }
                }
            }
        }

        return islands;
    }
};
