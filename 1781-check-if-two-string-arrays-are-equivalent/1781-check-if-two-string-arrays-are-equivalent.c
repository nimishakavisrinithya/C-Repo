bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    char s[1001]= "";
    char str[1001] = "";
    for(int i=0; i<word1Size; i++)
    {
       strcat(s, word1[i]);
    }
    for(int i=0; i<word2Size; i++)
    {
        strcat(str, word2[i]);
    }
    if(strcmp(str, s)==0)
    return true;
    else return false;
}