class Solution {
public:
    string sortVowels(string s) {
        int n= s.size();
        vector<char>str;
        for(int i=0; i<n; i++){
        if(s[i]=='a' ||  s[i]=='e' || s[i]=='i' || s[i]=='o' ||  s[i]=='u' ||s[i]=='A' || s[i]=='E' || s[i]=='I'|| s[i]=='O' || s[i]=='U') str.push_back(s[i]);
        }
        sort(str.begin(), str.end());
        for(int i=0; i<n; i++){
        if(s[i]=='a' ||  s[i]=='e' || s[i]=='i' || s[i]=='o' ||  s[i]=='u' ||s[i]=='A' || s[i]=='E' || s[i]=='I'|| s[i]=='O' || s[i]=='U'){
            s[i]= str[0];
            str.erase(str.begin()+0);
        }
        }
        return s;
    }
};