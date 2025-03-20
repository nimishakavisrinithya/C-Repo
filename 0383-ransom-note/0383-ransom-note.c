bool canConstruct(char* ransomNote, char* magazine) {
    int frq[26];
    int f[26];
    for(int i=0; ransomNote[i]!='\0'; i++) frq[ransomNote[i]-'a']++;
    for(int i=0; magazine[i]!='\0'; i++) f[magazine[i] -'a']++;
    for(int i=0; i<26; i++){
        if(frq[i]<=f[i]) continue;
        else return false;
    }
    return true;
}