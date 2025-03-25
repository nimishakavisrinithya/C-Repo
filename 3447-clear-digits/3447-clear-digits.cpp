class Solution {
public:
    string clearDigits(string s) {
        for(int i=0; s[i]!='\0'; i++){
            if(s[i]>='0' && s[i]<='9'){
                s.erase(i, 1);
                s.erase(i-1, 1);
                i=i-2;
            }
        }
        return s;
    }
};