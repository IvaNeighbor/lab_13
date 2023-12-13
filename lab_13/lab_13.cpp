#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf_s("Enter an integer: ");
    scanf_s("%d", &n);

    if (n < 0)
        printf_s("Error! Factorial of a negative number doesn't exist.\n");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf_s("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
