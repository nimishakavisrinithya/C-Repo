int lengthOfLastWord(char* s) {
  int k= strlen(s);
  int c=0;
  for(int i=k-1; i>=0; i--){
  if(s[i]!=' ') c++;
  if(c==0 && s[i]==' ') continue;
  if(c!=0 && s[i]==' ') break;
  }
  return c;  
}