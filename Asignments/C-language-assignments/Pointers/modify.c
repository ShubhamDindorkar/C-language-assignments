#include <stdio.h>

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr;

    ptr = arr;

    printf("Original array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, *(ptr + i));
    }

    *(ptr + 2) = 100;
    *(ptr + 4) = 200;

    printf("\nModified array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}
