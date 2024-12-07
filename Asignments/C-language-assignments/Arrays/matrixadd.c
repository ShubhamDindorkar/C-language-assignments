#include <stdio.h>

int main()
{
    int rows, cols;
    int mat1[10][10], mat2[10][10], result[10][10] = {0}; // Initialize result matrix

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Performing matrix multiplication
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int k = 0; k < cols; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the resulting matrix
    printf("Resulting matrix after multiplication:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
