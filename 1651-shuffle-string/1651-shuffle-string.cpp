class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string tar = s;
        for(int i=0; i<s.size(); i++){
            tar[indices[i]]= s[i];
        }
        return tar;
    }
};