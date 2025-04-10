class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int c=0;
        unordered_map<string, int>mpp;
        for(auto x : arr) mpp[x]++;
        for(string x : arr){
            if(mpp[x]==1) c++;
            if(c==k) return x;
        }
        string str;
        return str;
    }
};