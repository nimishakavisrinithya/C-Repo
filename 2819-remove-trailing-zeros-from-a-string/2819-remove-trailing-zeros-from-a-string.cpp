class Solution {
public:
    string removeTrailingZeros(string num) {
        int p = num.size()-1;
        for(int i=p; i>=0; i--){
            if(num[i]=='0') num.erase(i,1);
            else break;
        }
        return num;
    }
};