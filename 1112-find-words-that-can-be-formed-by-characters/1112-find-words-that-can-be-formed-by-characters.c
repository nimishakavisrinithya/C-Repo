int good(char *s, int a[]){
    int k=0;
    int frq[26] ={0};
    for(int i=0; s[i]!='\0'; i++){frq[s[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        printf("%d ", frq[i]);
        if(frq[i]<=a[i]) continue;
        else return 0;
    }
    return 1;
}
int countCharacters(char** words, int wordsSize, char* chars) {
    int sum=0;
    int frq[26] = {0};
    for(int i=0; i<strlen(chars); i++) frq[chars[i]-'a']++;
    for(int i=0; i<wordsSize; i++){
        if(good(words[i], frq )) sum+=strlen(words[i]);
    }
    return sum;
}