class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        vector<int>freqy(26 , 0);
        for(int i = 0 ; i < n ; i++){
            freqy[s[i] - 'a']++;
        }
        int maxi = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            if(freqy[s[i] - 'a'] < k){
                int left = longestSubstring(s.substr(0 , i) , k);
                int right = longestSubstring(s.substr(i + 1) , k);
                return max(left, right);
            }
        }
        return n;
    }
};