#include <stdio.h>

int main(void)
{
    int value = 25;
    int *ptr = &value;

    printf("Value      = %d\n", value);
    printf("Via pointer = %d\n", *ptr);

    *ptr = 50;

    printf("Updated value = %d\n", value);

    return 0;
}
