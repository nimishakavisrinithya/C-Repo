class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>vec;
        int i=0;
        int j=0;
        int n = mat.size();
        int m = mat[0].size();
        while(i<n && j<m){
             vec.push_back(mat[i][j]);
             if((i+j)%2==0){
                if(j==m-1){
                    i++;
                }
                else if(i==0){
                    j++;
                }
                else{
               i--;
               j++;
                }
            }
            else if((i+j)%2!=0){
                if(i==n-1){
                    j++;
                }
                else if(j==0){
                    i++;
                }
                else{
                j--;
                i++;
                }
            }

        }
        return vec;
    }
};