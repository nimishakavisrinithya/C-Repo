/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int max= candies[0];
    bool *k =malloc(candiesSize*sizeof(bool));
    memset(k, 0, candiesSize * sizeof(bool));
    for(int i=0; i<candiesSize; i++)
    {
        if(candies[i]>max) max = candies[i];
    }
    for(int i=0; i<candiesSize; i++)
    {
        if(candies[i]+extraCandies>= max) k[i]= true;
    }
    *returnSize = candiesSize;
    return k;
}