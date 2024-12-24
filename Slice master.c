#include <stdio.h>
#include <string.h>

int solve(char *S) {
    int n = strlen(S);
    int lastSeen[256];  // To store the last index of each character
    int points = 0;

    // Initialize lastSeen array
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    int start = 0;
    for (int i = 0; i < n; i++) {
        // If current character was seen before in the current part, calculate points for this part
        if (lastSeen[S[i]] >= start) {
            int length = i - start;
            points += length * length;
            start = i;
        }
        lastSeen[S[i]] = i;
    }

    // Calculate points for the last part
    int length = n - start;
    points += length * length;

    return points;
}

int main() {
    char S[1001];
    scanf("%s", S);
    int result = solve(S);
    printf("%d\n", result);
    return 0;
}
    