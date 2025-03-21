bool isSubstringPresent(char* s) {
    char rev[101];
    int s1 =0, s2=0;
    int l= strlen(s);
    for(int i=0; i<l; i++){
        rev[i] = s[l-1-i];
    }
    rev[l] = '\0';
    for(int i=0; i<l-1; i++){
        char sub[3] = {s[i], s[i + 1], '\0'};   // Extract 2-character substring
        if (strstr(rev, sub)) return 1;
    }
    return 0;
}