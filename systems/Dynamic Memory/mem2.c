#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_mem(int *p, int size) {
    int i;
    for (i = 0; i < size; ++i) {
        printf("addr: %p | value: %x\n", p, *p);
        ++p;
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    int *p1 = malloc(10 * sizeof(int));
    int *p2 = calloc(10, sizeof(int));
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    print_mem(p1, 10);
    print_mem(p2, 10);
    p1 = realloc(p1, 100);    
    p2 = realloc(p2, 100);    
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    print_mem(p1, 100);
    print_mem(p2, 100);
    return 0;
}