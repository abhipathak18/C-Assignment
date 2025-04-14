// prime.h

int isPrime(int n) {
    if (n <= 1) return 0;
    int i; // Declare outside loop for C89
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

