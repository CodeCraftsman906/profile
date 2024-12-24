#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_STR_LEN 100
#define MAX_STRINGS 1000

// Function to check if a string matches a pattern with '*'
bool is_match(const char *str, const char *pattern) {
    const char *str_ptr = str, *pat_ptr = pattern;
    const char *star_match = NULL, *last_star = NULL;

    while (*str_ptr) {
        if (*pat_ptr == *str_ptr || *pat_ptr == '?') {
            // Characters match or '?' matches a single character
            str_ptr++;
            pat_ptr++;
        } else if (pat_ptr == '') {
            // Record the position of '*'
            last_star = pat_ptr;
            star_match = str_ptr;
            pat_ptr++;
        } else if (last_star) {
            // Backtrack to the last '*'
            pat_ptr = last_star + 1;
            str_ptr = ++star_match;
        } else {
            return false;
        }
    }

    // Check for remaining '*' in the pattern
    while (pat_ptr == '') {
        pat_ptr++;
    }

    return *pat_ptr == '\0';
}

// Function to process the queries and count matches

void WildcardMatch(int N, char strings[][MAX_STR_LEN], int Q, char queries[][MAX_STR_LEN]) {
    for (int i = 0; i < Q; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (is_match(strings[j], queries[i])) {
                count++;
            }
        }
        printf("%d\n", count);
    }
}

int main() {
    int N, Q;
    char strings[MAX_STRINGS][MAX_STR_LEN];
    char queries[MAX_STRINGS][MAX_STR_LEN];

    // Read number of strings
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s", strings[i]);
    }

    // Read number of queries
    scanf("%d", &Q);
    for (int i = 0; i < Q; i++) {
        scanf("%s", queries[i]);
    }

    // Process the queries
    WildcardMatch(N, strings, Q, queries);

    return 0;
}
