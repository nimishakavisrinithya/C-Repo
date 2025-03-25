class Solution {
public:
    string toLowerCase(string s) {
        for(char &i: s){
            i = tolower(i);
        }
        return s;
    }
};