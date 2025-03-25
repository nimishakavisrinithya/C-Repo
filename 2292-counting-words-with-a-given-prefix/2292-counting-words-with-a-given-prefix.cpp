class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int c=0;
        for(const string &words : words){
            if(words.find(pref)==0) c++;
        }
        return c;
    }
};