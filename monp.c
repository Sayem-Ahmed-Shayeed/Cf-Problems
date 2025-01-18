#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to shuffle an array randomly using Fisher-Yates algorithm
void shuffleArray(int arr[], int n) {
    srand(time(NULL));
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        // Swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int totalCandies = n * n;
    int candies[totalCandies];

    // Fill the candies array with values from 1 to n^2
    for (int i = 0; i < totalCandies; i++) {
        candies[i] = i + 1;
    }

    // Shuffle the candies array randomly
    shuffleArray(candies, totalCandies);

    // Distribute the candies to the brothers
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", candies[i * n + j]);
        }
        printf("\n");
    }

    return 0;
}
