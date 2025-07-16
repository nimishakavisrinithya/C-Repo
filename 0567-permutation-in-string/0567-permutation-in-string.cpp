class Solution {
public:
int fun(string s, int f[]){
    int frq[26] = {0};
    int n = s.length();
    for(int i=0; i<n; i++) frq[s[i]-'a']++;
    for(int i=0; i<26; i++) if(f[i]!=frq[i]) return 0;
    return 1;
}
    bool checkInclusion(string s1, string s2) {
      int n = s1.length();
      int m = s2.length();
      string s;
      if(n>m) return 0;
      int l=0, r=0;
      int frq[26] = {0};
      for(int i=0; i<n; i++) frq[s1[i]-'a']++; 
      for(int i=0; i<n; i++){
        s+=s2[i];
        r++;
      }
      while(r<=m){
        if(fun(s,frq)) return 1;
        s.erase(0,1);
        l++;
        s+=s2[r];
        r++;
      }
      return 0;
    }
};