class Solution {
public:
    string freqAlphabets(string s) {
        string s1;
        string k;
        for(int i=0; i<s.size(); i++){
            if(i + 2 < s.size() && s[i + 2] == '#'){
                k = s.substr(i,2);
                int n= stoi(k);
                s1+=(char)(n-1+'a');
                i+=2;
            }
            else if ( s[i]!='#') s1+=s[i]-'0'+'a'-1;
        }
        for(int i=0; i<s.size(); i++){
            cout<<s[i];
        }
        return s1;
    }
};