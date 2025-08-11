class Solution {
public:
int f=0;
int q=0, r=0,m=0,n=0;
vector<int>vec;
 void fun(int i, int j, vector<vector<int>>& land){
    if(i<0 || j<0 || j>=land[0].size() || i>=land.size() || land[i][j]==0)
        return;
    if(f==0){
            f=1;
            vec.push_back(i);
            vec.push_back(j);
        }
    land[i][j]=0;
    if(m<=i && n<=j){
     m=i, n=j;
    }
    cout<<q<<r;
    cout<<" ";
    fun(i+1, j,land);
    fun(i,j+1, land);
    fun(i-1, j, land);
    fun(i,j-1, land);
 }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>x;
        for(int i=0; i<land.size(); i++){
            for(int j=0; j<land[0].size(); j++){
                if(land[i][j]==1){
                    f=0;
                    m=0,n=0;
                    fun(i,j, land);
                    vec.push_back(m);
                    vec.push_back(n);
                    x.push_back(vec);
                    vec.clear();
                }
            }
        }
        return x;
    }
};