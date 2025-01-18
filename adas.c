#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a;
    int sum = 0;
    int cons[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        sum += a;
        cons[i] = sum;
    }

    int q;
    scanf("%d", &q);
    int find[q];

    for (int i = 0; i < q; i++) {
        scanf("%d", &find[i]);
        int left = 0;
        int right = n - 1;
        int result = 1; // Default case if not found

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (find[i] > cons[mid]) {
                left = mid + 1;
                result = mid + 2; // Update the index
            } else {
                right = mid - 1;
            }
        }
        printf("%d\n", result);
    }

    return 0;
}
