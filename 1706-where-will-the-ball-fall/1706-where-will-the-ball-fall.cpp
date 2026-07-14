class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int>ans;
        int r = grid.size();
        int c = grid[0].size();
        for(int k=0; k<c; k++){
            int i=0, j=k;
         while(i<r){
            if(j+1<c && grid[i][j]==1 && grid[i][j+1]==1){
                j++;
                i++;
            }
            
            else if(j-1>=0 && grid[i][j]==-1 && grid[i][j-1]==-1){
                j--;
                i++;
            }
             else{
             
               break;
            }
         }
         if(i>=r)
         ans.push_back(j);
         else ans.push_back(-1);
        }
        return ans;
    }
};