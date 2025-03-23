class Solution {
public:
    string truncateSentence(string s, int k) {
        int c=0, in=0;
        for(char i:s){
            in++;
            if(i==' ') c++;
            if(c==k) break;
        }
        if(k>c) return s;
        in = in-1;
        s.erase(in);
        return s;
    }
};