class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string k = "\0";
        for(string x : words){
            string s=x;
            reverse(s.begin(), s.end());
            if(x.compare(s)==0) return x;
        }
        return k;
    }
};