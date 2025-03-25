class Solution {
public:
    bool checkIfPangram(string sentence) {
        int frq[26] ={0};
        for(int i=0; sentence[i]!='\0'; i++) frq[sentence[i]-'a']++;
        for(int i=0; i<26; i++) if(frq[i]==0) return 0;
        return 1;
    }
};