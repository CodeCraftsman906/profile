#include <stdio.h>

// Function to calculate Fibonacci numbers recursively
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int i;

    printf("The first 25 numbers of the Fibonacci sequence are:\n");
    for (i = 0; i < 25; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
    