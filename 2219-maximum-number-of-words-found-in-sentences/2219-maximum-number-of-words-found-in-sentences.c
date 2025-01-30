int count(const char *a)
{    int c=0;
    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]==' ') c++;
    }
    return c+1;
}
int mostWordsFound(char** sentences, int sentencesSize) {
    int max= count(sentences[0]);
    for(int i=0; i<sentencesSize; i++)
    {
        if(count(sentences[i])>max) max= count(sentences[i]);
    }
    return max;
}