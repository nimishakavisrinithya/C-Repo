class Solution {
public:
    int balancedStringSplit(string s) {
        int c=0, k=0, b=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='R') c++;
            else b++;
            if(c==b){
                k++;
                c=0;
                b=0;
            }
        }
        return k;
    }
};