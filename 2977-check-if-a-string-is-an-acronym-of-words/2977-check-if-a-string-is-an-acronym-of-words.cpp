class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string s1;
        for(const string &word : words){
            s1+=word[0];
        }
        if(s.compare(s1)==0) return 1;
        return 0;
    }
};