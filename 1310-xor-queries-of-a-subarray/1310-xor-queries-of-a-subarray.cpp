class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>vec;
        int n = arr.size();
        vec.push_back(arr[0]);
        for(int i=1; i<n; i++){
            vec.push_back(arr[i]^vec[i-1]);
        }
        vector<int>ans;
       for(auto i : queries){
        if(i[0] == 0) ans.push_back(vec[i[1]]);
        else ans.push_back(vec[i[1]]^vec[i[0]-1]);
       }
       return ans;
    }
};