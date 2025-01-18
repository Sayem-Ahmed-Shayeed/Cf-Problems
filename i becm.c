#include <stdio.h>

int main() {
    int n, a, b, i, num;
    scanf("%d", &n);
    scanf("%d", &a);

    // Use a single array to keep track of the numbers
    int seen[105] = {0};

    for (i = 0; i < a; i++) {
        scanf("%d", &num);
        seen[num] = 1;
    }

    scanf("%d", &b);

    for (i = 0; i < b; i++) {
        scanf("%d", &num);
        seen[num] = 1;
    }

    int allPresent = 1;
    for (i = 1; i <= n; i++) {
        if (!seen[i]) {
            allPresent = 0;
            break;
        }
    }

    if (allPresent) {
        printf("I become the guy.");
    } else {
        printf("Oh, my keyboard!");
    }

    return 0;
}

