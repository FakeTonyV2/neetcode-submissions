class Solution {
public:
    void bfs (vector<int> start, vector<vector<char>>& grid, vector<vector<bool>>& visited) {
        int row = grid.size();
        int col = grid[0].size();
        
        queue<vector<int>> q;
        q.push(start);

        while (!q.empty()) {
            vector<int> cur = q.front();
            q.pop();
            grid[cur[0]][cur[1]] = '0';
            if (visited[cur[0]][cur[1]] == true) {
                continue;
            }
            visited[cur[0]][cur[1]] = true;

            
            if(cur[0] + 1 < row) {
                if (grid[cur[0] + 1][cur[1]] == '1' ) {
                    q.push({cur[0] + 1, cur[1]});
                }
            }
            if(cur[1] + 1 < col) {
                if (grid[cur[0]][cur[1] + 1] == '1' ) {
                    q.push({cur[0], cur[1] + 1});
                }
            }
            if(cur[0] - 1 > -1) {
                if (grid[cur[0] - 1][cur[1]] == '1' ) {
                    q.push({cur[0] - 1, cur[1]});
                }
            }
            if(cur[1] - 1 > -1) {
                if (grid[cur[0]][cur[1] - 1] == '1' ) {
                    q.push({cur[0], cur[1] - 1});
                }
            }

        }

    }
    int numIslands(vector<vector<char>>& grid) {
        int x = grid[0].size();
        int y = grid.size();
        vector<vector<bool>> visited(y, vector<bool>(x, false));
        int islandCount = 0;

        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    islandCount++;
                    cout << "Valid: " << i << " " << j << "\n";
                    bfs({i, j}, grid, visited);
                }
            }
        }

        return islandCount;

    }
};
