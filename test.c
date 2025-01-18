#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int name[t];

    for (int i = 0; i < t; i++) {
        scanf("%d", &name[i]);
    }

    int count = 0;
        for (int i = 0; i < t; i++) {
        if (name[i] == 10) {
            int sum = 0;
            int j = i;
            while (name[j] != 1 && j<t) {
                sum = sum + name[j];
                j++;
            }
            count = count + sum/sum;
            i = j - 1;
        } else if (name[i] == 1) {
            int sum1 = 0;
            int k = i;
            while (name[k] != 10 && k<t) {
                sum1 = sum1 + name[k];
                k++;
            }
            count = count + sum1/sum1;
            i = k - 1;
        }
    }

    printf("%d", count);




    return 0;
}
