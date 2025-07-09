class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0,l=0, ma=0,c=1;
        int frq[256]={0};
        while(r<s.size()){
            while(frq[s[r]]>=1){
              if(s[l]==s[r]){ //l = m
              //frq[s[r]]--; 
              frq[s[l]]=0;
              l++;  
              c--;
            }
            else{ 
                frq[s[l]]=0; 
                l++;
                c--;  
            }
        }
        ma = max(c,ma);
        frq[s[r]]++; 
        // c++; 
        r++; 
        c++;
    }
    return ma;
    }
};