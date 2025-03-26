class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
        for(string x : patterns){
            if(word.find(x) !=std::string::npos) c++;
        }
        return c;
    }
};