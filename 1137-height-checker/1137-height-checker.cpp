class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>vec(heights);
        int c=0;
        sort(vec.begin(), vec.end());
        for(int i=0; i<heights.size(); i++){
             if(heights[i]!=vec[i]) c++;
        }
        return c;
    }
};