class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int c = 0;

        for(int i = 0; i < n; i++){
            int size = grid[i].size();
            sort(grid[i].begin(), grid[i].end());   // ascending

            if(grid[i][size-1] < 0) {
                // all negative
                c += size;
            }
            else if(grid[i][0] < 0) {
                // some negative
                int idx = upper_bound(grid[i].begin(), grid[i].end(), -1) - grid[i].begin();
                c += idx;   // negatives are before idx
            }
            // else row has no negatives → do nothing
        }

        return c;
    }
};
