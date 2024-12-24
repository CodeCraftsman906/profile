#include <stdio.h>

void sum_of_digits_non_recursive() {
    int number, sum = 0, digit;
    
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);

    if (number < 10000 || number > 99999) {
        printf("Please enter a valid 5-digit number.\n");
        return;
    }

    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);
}

int main() {
    sum_of_digits_non_recursive();
    return 0;
}
