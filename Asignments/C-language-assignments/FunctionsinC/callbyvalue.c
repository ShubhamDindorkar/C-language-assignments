#include <stdio.h>

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("After swap (by value): a = %d, b = %d\n", a, b);
}

int main()
{
    int a = 5, b = 10;
    printf("Before swap (by value): a = %d, b = %d\n", a, b);
    swapByValue(a, b);
    printf("After function call: a = %d, b = %d\n", a, b);
    return 0;
}
