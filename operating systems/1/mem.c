#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "common.h"

int value;

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: mem <value>\n");
        exit(1);
    }

    int *p;
    p = &value;
    assert(p != NULL);

    printf("(pid:%d) addr of p:        %p\n", (int)getpid(), &p);
    printf("(pid:%d) addr stored in p: %p\n", (int)getpid(), p);

    *p = atoi(argv[1]); // assign value to addr stored in p

    while (1) {
        Spin(1);
        *p = *p + 1;
        printf("(pid:%d) value of p: %d\n", getpid(), *p);
    }

    return 0;
}