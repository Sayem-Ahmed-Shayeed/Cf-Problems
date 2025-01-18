#include <stdio.h>

void solve(int n) {
    if (n == 2) {
        printf("1 2\n");
        return;
    }

    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        solve(n);
    }

    return 0;
}
