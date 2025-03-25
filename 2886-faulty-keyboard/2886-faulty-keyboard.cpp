class Solution {
public:
    string finalString(string s) {
        for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='i'){
            s.erase(i, 1);
            std::reverse(s.begin(), s.begin() + i);
            i--;
        }
        }
        return s;
    }
};