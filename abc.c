#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[200005]; // The maximum length of s is 2*10^5
        scanf("%s", s);

        int len = strlen(s);
        int coins = 0;

        // Count the number of "AB" and "BA" pairs
        int ab_count = 0, ba_count = 0;
        for (int i = 0; i < len - 1; i++) {
            if (s[i] == 'A' && s[i + 1] == 'B') {
                ab_count++;
                i++; // Skip the next character to avoid overlapping pairs
            } else if (s[i] == 'B' && s[i + 1] == 'A') {
                ba_count++;
                i++; // Skip the next character to avoid overlapping pairs
            }
        }

        // Calculate the total number of coins
        coins = (ab_count < ba_count) ? ab_count : ba_count;

        printf("%d\n", coins);
    }

    return 0;
}
