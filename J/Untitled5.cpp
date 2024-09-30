#include <stdio.h>

int main() {
    int x, y, k;
    scanf("%d %d %d", &x, &y, &k);
    
    for (int t = 0; t <= 100; t++) {
        if ((x + t == y - t) && (x + t == k)) {
            printf("%d\n", t);
            return 0;
        }
    }
    
    printf("-1\n");
    return 0;
}

