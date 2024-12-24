#include <stdio.h>

void solve(int T) {
    while (T--) {
        int G, P, n;
        scanf("%d %d", &G, &P);
        scanf("%d", &n);
        

        int problem1_solved = 0, problem2_solved = 0;
        for (int i = 0; i < n; i++) {
            int solved1, solved2;
            scanf("%d %d", &solved1, &solved2);
            if (solved1 == 1) problem1_solved++;
            if (solved2 == 1) problem2_solved++;
        }

        // Cost when green balloons are used for the first problem and purple for the second
        int cost1 = (problem1_solved * G) + (problem2_solved * P);
        // Cost when purple balloons are used for the first problem and green for the second
        int cost2 = (problem1_solved * P) + (problem2_solved * G);

        // Minimum cost
        int minCost = cost1 < cost2 ? cost1 : cost2;
        printf("%d\n", minCost);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    solve(T);
    return 0;
}

