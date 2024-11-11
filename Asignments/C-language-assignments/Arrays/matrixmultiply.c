
#include <stdio.h>

int main()
{
    int i, j, k;
    int a[3][3] = {{4, 5, 8}, {3, 6, 1}, {2, 9, 7}};
    int b[3][3] = {{1, 5, 3}, {9, 1, 4}, {3, 8, 9}};
    int multiply[3][3] = {0}; // Initialize all elements to 0

    // Performing matrix multiplication
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                multiply[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display the resulting matrix
    printf("Resulting matrix after multiplication:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", multiply[i][j]);
        }
        printf("\n");
    }

    return 0;
}
