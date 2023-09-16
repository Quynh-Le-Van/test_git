#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int8_t j = -2;
    int16_t i = 0;

    i = j;
    printf("%x", i);

    return 0;
}