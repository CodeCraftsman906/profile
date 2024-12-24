#include <stdio.h>

// Helper function to check if a number is prime
int is_prime(int number, int i) {
    if (number <= 2)
        return (number == 2) ? 1 : 0;
    if (number % i == 0)
        return 0;
    if (i * i > number)
        return 1;
    return is_prime(number, i + 1);
}

// Function to print prime numbers up to a given number using recursion
void print_primes(int number) {
    if (number >= 2) {
        if (is_prime(number, 2))
            printf("%d ", number);
        print_primes(number - 1);
    }
}

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 2) {
        printf("No prime numbers less than 2.\n");
    } else {
        printf("Prime numbers up to %d are: ", number);
        print_primes(number);
        printf("\n");
    }

    return 0;
}
