#include <stdio.h>

int main() {
    int num = 0x12345678;
    int *p = &num;
    char *pc = (char *)p;
    int i;
    for (i = 0; i < 4; ++i)
        printf("mem[%d] = %x\n", i, pc[i]);
    return 0;
}
