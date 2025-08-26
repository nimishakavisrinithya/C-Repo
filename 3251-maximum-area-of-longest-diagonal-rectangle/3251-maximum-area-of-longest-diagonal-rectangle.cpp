class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        vector<int>dia(dimensions.size());
        vector<int>area(dimensions.size());
        for(int i=0; i<dimensions.size(); i++){
            int d = 0, a=1;
            for(int j=0; j<dimensions[0].size(); j++){
            d+=dimensions[i][j]*dimensions[i][j];
            a*= dimensions[i][j];
            }
            dia[i]= d;
            area[i] = a;
        }
        int m=0;
        for(auto x : dia){
         if(x>=m) m=x;
        }
        int aremax=0;
        for(int i=0; i<dimensions.size(); i++){
            if(dia[i]==m){
                aremax = max(aremax, area[i]);
            }
        }
        return aremax;
    }
};