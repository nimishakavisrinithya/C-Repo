/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int find(char *s, char x)
 {
    int b = strlen(s);
    for(int i=0; i<b; i++)
    {
        if(s[i]== x) return 1;
    }
    return 0;
 }
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int *a = (int*)malloc(wordsSize*sizeof(int));
    int c=0;
    for(int i=0; i<wordsSize; i++)
    {
        if(find(words[i], x)){
            a[c] = i;
            c++;
        }
    }
    *returnSize = c;
    return a;
}