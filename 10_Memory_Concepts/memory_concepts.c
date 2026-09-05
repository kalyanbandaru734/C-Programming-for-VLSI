#include <stdio.h>

int main(void)
{
    int value = 100;
    int *ptr = &value;

    printf("Value        = %d\n", value);
    printf("Address      = %p\n", (void *)&value);
    printf("Pointer value= %p\n", (void *)ptr);
    printf("Size of int  = %zu bytes\n", sizeof(value));

    return 0;
}
