#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long int a, b;
        scanf("%lld %lld", &a, &b);

        if (a % b == 0) {
            printf("0\n");
        } else {
            long long int moves = (b - (a % b)) % b;
            printf("%lld\n", moves);
        }
    }

    return 0;
}

