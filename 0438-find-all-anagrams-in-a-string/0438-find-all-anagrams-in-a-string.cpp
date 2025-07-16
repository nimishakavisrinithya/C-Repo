class Solution {
public:
int fun(string s, int frq[]){
    int f[26] = {0};
    int n=s.length();
    for(int i=0; i<n; i++) f[s[i]-'a']++;
    for(int i=0; i<26; i++) if(f[i]!=frq[i]) return 0;
    return 1;
}
    vector<int> findAnagrams(string s, string p) {
        vector<int>vec;
        int l=0, r=0;
        int frq[26] = {0};
        int n = p.length(), m = s.length();
        string str;
        for(int i=0; i<n; i++) frq[p[i]-'a']++;
        for(int i=0; i<n; i++){
            str+=s[i];
            r++;
        }
         while(r<=m){ //0
             //cout<<str<<endl;
             if(fun(str,frq)) vec.push_back(l);
             str.erase(0,1);  //ba
             l++; //l=1
             str+=s[r]; //r=
            r++;
         }
        return vec;
    }
};