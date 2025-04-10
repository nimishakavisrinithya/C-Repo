class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int c=0;
        unordered_map<string, int>mpp;
        for(string x : words){
            mpp[x]++;
            string s=x;
         reverse(s.begin(), s.end());
         if(x==s) continue;
         else  mpp[s]++;
        }
        for(auto x : mpp) if(x.second>1) c++;
        return c/2;
    }
};