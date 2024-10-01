#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int A[T], B[T], C[T], cashback[T];

    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &A[i], &B[i], &C[i]);
    }

    for (int i = 0; i < T; i++) {
        cashback[i] = (A[i] * B[i]) / 100;
        if (cashback[i] > C[i]) {
            cashback[i] = C[i];
        }
    }

    for (int i = 0; i < T; i++) {
        printf("Case #%d: %d\n", i + 1, cashback[i]);
    }

    return 0;
}

