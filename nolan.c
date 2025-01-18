#include <stdio.h>

long long int calculateSum(long long int n) {
    if (n % 2 == 0) {
        return (n / 2) * (n + 2);
    } else {
        return -((n + 1) / 2) * n;
    }
}

int main() {
    long long int n;
    scanf("%lld", &n);
    long long int result = calculateSum(n);
    printf("%lld", result);
    return 0;
}
