class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>vec;
        int n = encoded.size();
        vec.push_back(first);
        for(int i=0; i<n; i++){
            vec.push_back(vec[i]^encoded[i]);
        }
        return vec;
    }
};