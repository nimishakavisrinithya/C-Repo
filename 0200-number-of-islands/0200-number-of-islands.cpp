class Solution {
public:
    void fun(int i, int j, vector<vector<char>>& grid) {
        if (j >= grid[0].size() || i >= grid.size() || i < 0 || j < 0 ||grid[i][j] == '0') return;
        grid[i][j] = '0';
        fun(i + 1, j, grid);
        fun(i, j + 1, grid);
        fun(i - 1, j, grid);
        fun(i, j - 1, grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int c = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    fun(i, j, grid);
                    c++;
                }
            }
        }
        return c;
    }
};