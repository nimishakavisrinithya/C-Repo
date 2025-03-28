class Solution {
public:
    string removeStars(string s) {
        for(int i=0; i<s.size(); i++){
            if(s[i]=='*'){
            s.erase(s.begin() + i - 1, s.begin() + i + 1);
            i = i-2;
        }
    }
    return s;
 }
};