/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int ser(int a[], int Asize, int b[], int bSize, int n) {
    int c=0;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(a[i]==b[j]){
                c++;
                break;
            }
        }
    }
    return c;
 }
int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    int *res = (int*)malloc(ASize*sizeof(int));
    for(int i=0; i<ASize; i++)
    {
        res[i]= ser(A, ASize, B, BSize, i);
    }
    *returnSize = ASize;
    return res;
}