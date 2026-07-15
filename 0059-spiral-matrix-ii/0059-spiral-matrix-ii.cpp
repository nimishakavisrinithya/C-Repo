class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       vector<vector<int>> matrix(n, vector<int>(n));
        int r = n;
        int c = n;
        int i=0, j=0;
        int count =1;
        while(r>1 && c>1){
            for(int k=0; k<c-1; k++){
                matrix[i][j] = count;
                count++;
                j++;
            }
            for(int k=0; k<r-1; k++){
                matrix[i][j] = count;
                count++;
                i++;
            }
            for(int k=0; k<c-1; k++){
                matrix[i][j] = count;
                count++;
                j--;
            }
            for(int k=0; k<r-1; k++){
                matrix[i][j] = count;
                count++;
                i--;
            }
            i++;
            j++;
            c-=2;
            r-=2;
        }
        if(r==1)
        matrix[i++][j++] = count++;
        return matrix;
        }
};