class Solution {
public:
    int minimizedStringLength(string s) {
        map<char, int>mpp;
        int c=0;
        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
        }
        for(auto &pair : mpp){
            c+=pair.second-1;
        }
        return s.size()-c;
    }
};