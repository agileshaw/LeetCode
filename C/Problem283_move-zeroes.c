/**
 * Problem283 - Move Zeros
 * 
 * https://github.com/agileshaw/LeetCode
 **/

#include <stdio.h>

void moveZeroes(int* nums, int numsSize)
{
    int i, j, k, count = 0;

    for (i = 0; i < numsSize-1; i++) {
        if (nums[i] == 0)
          count++;
    }

    while (count > 0) {
        i = 0;

        while (nums[i] != 0)
           i++;
        
        k = i;
        
        for (j = i+1; j < numsSize; j++) {
            nums[k] = nums[j];
            k = j;
        }
        
        nums[j-1] = 0;
        count--;
    }
}

int main()
{
    int num[] = {0,1,0,3,12};

    moveZeroes(&num[0], 5);

    printf("[%d", num[0]);
    for (int i = 1; i < 5; i++)
        printf(",%d", num[i]);

    printf("]\n");

    return 0;
}