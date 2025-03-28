class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        string s = "--X";
        string t = "X--";
        string r = "X++";
        string g = "++X";
        int c=0;
        for(string x : operations){
            if(x==s || x==t) c-=1;
            else c+=1;
        }
        return c;
    }
};