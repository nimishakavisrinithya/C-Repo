#include<string.h>
bool detectCapitalUse(char* word) {
    int c=0;
    int k = strlen(word);
    for(int i=0; word[i]!='\0'; i++){
        if(word[i]>='A' && word[i]<='Z') c++;
    }
    if(word[0]>='A' && word[0]<='Z' && c==1) return true;
    if(c==k || c==0){
        printf("%d", c);
        return true;
    }
    return false;
}