#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int main() {
    FILE *fp;
    char buff[MAX];

    fp = fopen("foo.txt", "r");

    if (fp == NULL) {
        fprintf(2, "File open failed\n");
        exit(1);
    }
    
    while (fgets(buff, MAX, fp)) {
        printf("%s", buff);
    }
    fclose(fp);

    return 0;
}