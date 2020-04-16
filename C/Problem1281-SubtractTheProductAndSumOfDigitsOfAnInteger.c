/**
 * Problem1281 - Subtract the Product and Sum of Digits of an Integer
 *
 * https://github.com/agileshaw/LeetCode
 **/

#include <stdio.h>

int subtractProductAndSum(int n)
{
    int tmp, product = 1, sum = 0;

    while (n) {
        tmp = n % 10;
        product *= tmp;
        sum += tmp;
        n /= 10;
    }

    return product-sum;
}

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", subtractProductAndSum(n));

    return 0;
}
