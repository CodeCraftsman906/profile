#include <stdio.h>

int sum_of_digits_recursive(int number) {
    if (number == 0)
        return 0;
    else
        return (number % 10) + sum_of_digits_recursive(number / 10);
}

int main() {
    int number;
    
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);

    if (number < 10000 || number > 99999) {
        printf("Please enter a valid 5-digit number.\n");
        return 0;
    }

    int sum = sum_of_digits_recursive(number);
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}


