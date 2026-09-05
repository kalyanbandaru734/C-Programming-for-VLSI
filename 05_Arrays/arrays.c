#include <stdio.h>

int main(void)
{
    int data[5] = {10, 20, 30, 40, 50};

    printf("Array values: ");

    for (int i = 0; i < 5; i++)
        printf("%d ", data[i]);

    printf("\n");
    return 0;
}
