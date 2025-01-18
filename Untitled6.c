#include <stdio.h>

int main() {
    long long int binary1, binary2;

    printf("Enter the first binary number (e.g., 00011101010): ");
    scanf("%lld", &binary1);

    printf("Enter the second binary number (e.g., 10010100101): ");
    scanf("%lld", &binary2);

    printf("You entered:\n");
    printf("Binary1: %lld\n", binary1);
    printf("Binary2: %lld\n", binary2);

    return 0;
}

