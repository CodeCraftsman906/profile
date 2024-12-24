#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int totalChocolates = N;
    int wrappers = N;

    while (wrappers >= K) {
        int newChocolates = wrappers / K;
        totalChocolates += newChocolates;
        wrappers = wrappers % K + newChocolates;
    }

    printf("%d\n", totalChocolates);
    
}
