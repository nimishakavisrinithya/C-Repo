class Solution {
public:
    int countAsterisks(string s) {
        int c=0, k=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='|') c++;
            if(c%2==0 && s[i]=='*') k++; 
        }
        return k;
    }
};