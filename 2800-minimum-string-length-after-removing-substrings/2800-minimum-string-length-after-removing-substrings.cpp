class Solution {
public:
    int minLength(string s) {
        for(int i=0; i+1<s.size(); i++){
            if((s[i]=='A' && s[i+1]=='B') || (s[i]=='C' && s[i+1]=='D')){
                s.erase(i,2);
               i = max(-1, i - 2);
            }
        }
        cout<<s;
        return s.size();
    }
};