/**
 * Problem001 - Two Sum
 * 
 * https://github.com/agileshaw/LeetCode
 **/

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target)
{
    int i, j;
    int *suc = (int*)malloc(sizeof(int) * 2);
    
    for (i = 0; i < numsSize; i++) {
        for (j = i+1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                suc[0] = i;
                suc[1] = j;
            }
        }
    }
    
    return suc;
}

int main()
{
	int num[] = {2, 7, 11, 15};
	int target = 9;

	int *index = twoSum(&num[0], 4, target);

	printf("[%d, %d]\n", index[0], index[1]);

	free(index);

	return 0;
}