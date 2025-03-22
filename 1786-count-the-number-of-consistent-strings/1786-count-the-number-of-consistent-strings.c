int check(char *s, int a[]){
    int frq[26] = {0};
    for(int i=0; s[i]!='\0'; i++) frq[s[i]-'a']++;
    //for(int i=0; i<26; i++) printf("%d ", frq[i]);
    //printf("\n");
    for(int i=0; i<26; i++){
        if((a[i]!=0 && frq[i]!=0)|| (a[i]!=0 && frq[i]==0) || (a[i]==0 && frq[i]==0)) continue;
        else return 0;
    }
    return 1;
}
int countConsistentStrings(char * allowed, char ** words, int wordsSize){
int frq[26] = {0};
int c=0;
for(int i=0; allowed[i]!='\0'; i++) frq[allowed[i]-'a']++;
for(int i=0; i<wordsSize; i++){
   // printf("%d -->", check(words[i], frq));
    if(check(words[i], frq)) c++;
}
return c;
}