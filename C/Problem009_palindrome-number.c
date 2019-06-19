/**
 * Problem009 - Palindrome Number
 * 
 * https://github.com/agileshaw/LeetCode
 **/

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    int rev = 0, copy = x;

    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    
    if (rev == copy) 
        return true;
    
    return false;
}

int main()
{
    int x;

    printf("Input: ");
    scanf("%d", &x);
    printf("%s\n", isPalindrome(x)? "true":"false");

    return 0;
}