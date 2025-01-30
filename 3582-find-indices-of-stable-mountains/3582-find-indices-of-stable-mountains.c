/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* stableMountains(int* height, int heightSize, int threshold, int* returnSize) {
    int c=0;
    int *s= (int*)malloc(heightSize*sizeof(int));
    
        for(int j=1; j<heightSize; j++)
        {
            if(height[j-1]>threshold){
                s[c] = j;
                c++;
            }
        }
    *returnSize = c;
    return s;
}