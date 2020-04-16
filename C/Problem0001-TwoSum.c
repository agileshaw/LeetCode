/**
 * Problem001 - Two Sum
 *
 * https://github.com/agileshaw/LeetCode
 **/

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    int *array = malloc(sizeof(int)*2);

    *returnSize = 2;
    for (i = 0; i < numsSize-1; i++) {
        for(j = i+1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                array[0] = i;
                array[1] = j;
                break;
            }
        }
    }

    return array;
}

int main()
{
	int num[] = {2, 7, 11, 15};
	int target = 9, returnSize, i;

	int *index = twoSum(&num[0], 4, target, &returnSize);

    printf("[%d", index[0]);
    for (i = 1; i < returnSize; i++)
        printf(",%d", index[i]);
	printf("]\n");

	free(index);

	return 0;
}
