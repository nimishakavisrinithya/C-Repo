bool isPalindrome(char* s) {
    int k= strlen(s);
    char v[k];
    int c=0;
    for(int i=0; s[i]!='\0'; i++){
        s[i]=tolower(s[i]);
    }
   for(int i=0; i<k; i++){
   if((s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9')) v[c++] = s[i];
   }
   for(int i=0; i<c/2; i++){
   if(v[i]==v[c-1-i]) continue;
   else return 0;
   printf("%c %c\n", v[i],v[c-1-i]);
   }
   return 1;
}