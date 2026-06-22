#include <stdbool.h>
#include <limits.h>

bool isPalindrome(int x) {
    if (x < 0) return false;

    int num = x;
    int rev = 0;

    while (num > 0) {
        int rem = num % 10;
        if (rev > (INT_MAX - rem) / 10) {
            return false;
        }
        rev = rev * 10 + rem;
        num /= 10;
    }

    return rev == x;
}
