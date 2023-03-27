#include <stdio.h>

void reset_to_98(int *n);

int main(void)
{
    int n = 10;

    printf("Before reset: %d\n", n);
    reset_to_98(&n);
    printf("After reset: %d\n", n);

    return 0;
}

void reset_to_98(int *n)
{
    *n = 98;
}

