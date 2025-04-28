// pallindrome.c

#include <stdio.h>
#include "pallindrome_modified_abhi.h"

int isPalindrome(int n) {
    int reversed = 0, original = n;

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return original == reversed;
}

PalindromeFunc getPalindromeChecker() {
    return isPalindrome;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    PalindromeFunc checker = getPalindromeChecker(); 

    if (checker(number)) 
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    return 0;
}

