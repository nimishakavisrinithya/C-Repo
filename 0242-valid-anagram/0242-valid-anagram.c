bool isAnagram(char* s, char* t) {
    int frq[26] = {0};
    int f[26] ={0};
    for(int i=0; s[i]!='\0'; i++) frq[s[i]-'a']++;
    for(int i=0; t[i]!='\0'; i++) f[t[i]-'a']++;
    for(int i=0; i<26; i++){
        if(frq[i]==f[i]) continue;
        else return false;
    }
    return true;
}