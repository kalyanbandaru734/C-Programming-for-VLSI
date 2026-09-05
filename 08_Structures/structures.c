#include <stdio.h>

struct Register
{
    char name[10];
    unsigned int value;
};

int main(void)
{
    struct Register reg = {"REG8", 170};

    printf("Register name  : %s\n", reg.name);
    printf("Register value : %u\n", reg.value);

    return 0;
}
