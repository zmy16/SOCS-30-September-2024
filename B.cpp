#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    char results[T][10];
    
    for (int i = 1; i <= T; i++) {
        int K, N, M;
        scanf("%d %d %d", &K, &N, &M);

        if (N + M >= K) {
            sprintf(results[i - 1], "yes"); 
        } else {
            sprintf(results[i - 1], "no");  
        }
    }
    
    for (int i = 1; i <= T; i++) {
        printf("Case #%d: %s\n", i, results[i - 1]);
    }
    
    return 0;
}

