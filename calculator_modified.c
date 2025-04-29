#include <stdio.h>
#include "calc_modified_abhi.h"

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) {
    if (b == 0) return 0; 
    return (float)a / b;
}

int (*getAdd())(int, int) { return add; }
int (*getSubtract())(int, int) { return subtract; }
int (*getMultiply())(int, int) { return multiply; }
float (*getDivide())(int, int) { return divide; }

int main() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &choice);

    if (choice == 1) {
        int (*fptr)(int, int) = getAdd();
        printf("Result: %d\n", fptr(a, b));
    } else if (choice == 2) {
        int (*fptr)(int, int) = getSubtract();
        printf("Result: %d\n", fptr(a, b));
    } else if (choice == 3) {
        int (*fptr)(int, int) = getMultiply();
        printf("Result: %d\n", fptr(a, b));
    } else if (choice == 4) {
        float (*fptr)(int, int) = getDivide();
        printf("Result: %.2f\n", fptr(a, b));
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}

