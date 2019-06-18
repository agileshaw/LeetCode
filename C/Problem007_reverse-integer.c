/**
 * Problem007 - Reverse Integer
 * 
 * https://github.com/agileshaw/LeetCode
 **/

#include <stdio.h>
#include <limits.h>

int reverse(int x)
{
    int tmp, num = 0;
    while (x)
    {
        if (num > INT_MAX / 10 || num < INT_MIN / 10)
            return 0;
        tmp = x % 10;
        num = num * 10 + tmp;
        x /= 10;
    }
    return num;
}

int main()
{
    int x, num;

    printf("Input: ");
    scanf("%d", &x);
    num = reverse(x);
    printf("Output: %d\n", num);
    
    return 0;
}