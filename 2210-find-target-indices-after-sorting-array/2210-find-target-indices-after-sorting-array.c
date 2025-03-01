#include <stdlib.h>

int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    // Step 1: Sort nums using Bubble Sort
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - 1 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    // Step 2: Count occurrences of target
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) count++;
    }

    // Step 3: Allocate memory for exactly 'count' indices
    *returnSize = count;
    int* res = (int*)malloc(count * sizeof(int));
    if (!res) return NULL; // Handle memory allocation failure

    // Step 4: Store indices of target
    int index = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            res[index++] = i;
        }
    }

    return res;
}
