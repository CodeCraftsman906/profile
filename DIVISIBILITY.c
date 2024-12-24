#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N:");
    scanf("%d", &N);
    int A[N];
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    // Get the last digit of the last number in the array
    int lastDigit = A[N-1] % 10;
    
    if (lastDigit == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
