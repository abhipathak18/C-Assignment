// prime number.c

#include <stdio.h>
#include "prime_modified_abhi.h"

int isPrime(int n) {
    if (n <= 1) return 0;
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

PrimeFunc getPrimeChecker(void) {
    return isPrime;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    PrimeFunc checker = getPrimeChecker();

    if (checker(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}

