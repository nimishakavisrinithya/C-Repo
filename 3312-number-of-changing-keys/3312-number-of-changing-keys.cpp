class Solution {
public:
    int countKeyChanges(string s) {
        for(int i=0; s[i]!='\0'; i++) s[i] = tolower(s[i]);
        int c=0;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]) continue;
            else c++;
        }
        return c;
    }
};