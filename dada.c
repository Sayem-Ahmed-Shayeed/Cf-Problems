#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();  // Consume the newline character

    for (int i = 0; i < n; i++)
    {
        char name[8][8];  // Changed the size to 9x9

        // Read the 9x9 grid of characters
        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                scanf(" %c", &name[j][k]);  // Added a space before %c
            }
        }

        // Print lowercase alphabetic characters
        for (int m = 0; m < 8; m++)
        {
            for (int n = 0; n < 8; n++)
            {
                if (name[m][n] >= 'a' && name[m][n] <= 'z')
                {
                    printf("%c", name[m][n]);
                }
            }
        }
        printf("\n");  // Print newline after each case
    }

    return 0;
}

