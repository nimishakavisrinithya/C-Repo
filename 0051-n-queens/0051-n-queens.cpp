class Solution {
public:
bool isValid(int row, int col, vector<string>&A, int n){
    //check top
    int ti = row, tj = col;
    while(ti>=0){
        if(A[ti][tj]== 'Q') return false;
        ti--;
    }
    //top right
     ti = row, tj = col;
    while(ti>=0 && tj<n){
        if(A[ti][tj]=='Q') return false;
        ti--;
        tj++;
    }
    //top left
     ti = row, tj = col;
    while(ti>=0 && tj>=0){
        if(A[ti][tj]=='Q') return false;
        ti--;
        tj--;
    }
    return true;
}
void Solve(int row, vector<string>&A, vector<vector<string>>&ds, int n){
    if(row==n){
        ds.push_back(A);
        return;
    }
    for(int col = 0; col<n; col++){
        if(isValid(row, col, A, n)){
            A[row][col] = 'Q';
            Solve(row+1, A, ds, n);
            A[row][col] = '.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ds;
        vector<string>A;
        for(int i=0; i<n; i++){
            string s;
            for(int j=0; j<n; j++){
                s+='.';
            }
            A.push_back(s);
        }
        Solve(0,A,ds,n);
        return ds;
    }
};