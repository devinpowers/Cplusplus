#include <stdio.h>

#define MAX 10

int main()
{
  int a[MAX];

  int i;

  // initialize the array to zeros.
  // Question: what happens if you forget to initialize the array?
  for (i = 0; i < MAX; ++i) {
    a[i] = 0;
  }

  for (i = 0; i < MAX; ++i) {
    printf("%d\n", a[i]);
  }

  return 0;
}
