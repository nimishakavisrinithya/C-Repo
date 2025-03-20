int is_vowel(char ch){
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return 1;
    return 0;
}
char* reverseVowels(char* s) {
    int l = strlen(s);
    char v[l];
    int c=0;
    for(int i=0; i<l; i++){
        if(is_vowel(s[i])) v[c++]= s[i];
    }
    c-=1;
    for(int i=0; i<l; i++){
       if(is_vowel(s[i])) s[i]= v[c--]; 
    }
    return s;
}