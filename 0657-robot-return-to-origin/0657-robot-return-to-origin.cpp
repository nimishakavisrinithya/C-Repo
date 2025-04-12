class Solution {
public:
    bool judgeCircle(string moves) {
        int c=0,k=0;
        for(auto x : moves){
            if(x=='U') c++;
            else if(x=='D') c--;
            else if(x=='L') k++;
            else k--;
        }
        if(k==0 && c==0) return 1;
        return 0;
    }
};