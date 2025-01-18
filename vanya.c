#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n, k, x;
        scanf("%lld %lld %lld", &n, &k, &x);
        long long sum1 = (k * (n - k + 1) + (k * (k - 1)))/ 2;
        long long sum2 = (k * (k + 1)) / 2;

        if (x >=sum1 && x <=sum2) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
