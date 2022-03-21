#include <stdio.h>     // for printf
#include <string.h>    // for strlen
#include <stdlib.h>    // for strtol, EXIT_SUCCESS / EXIT_FAILURE and exit

// Print out the usage of the program and exit.
void Usage(void);

// Return the nth fractional term in the Nilakantha series.
double NthNilakantha(int n);

int main(int argc, char *argv[]) {
  // Make sure the user provided us with exactly one command line argument
  // and exit if not.
  if (argc != 2) {
    Usage();
  }

  // Try to convert the command line argument to an integer >= 0
  // and exit if unable.
  char *arg_end;
  int num_terms = strtol(argv[1], &arg_end, 10);
  // NOTE: the return type of strtol is long, which can be larger than the
  // largest possible int. We'll ignore this case for this exercise.
  // NOTE: arg_end now stores the pointer to the character immediately after
  // the last character successfully parsed as integer. We can use this
  // to detect if there was anything other than the number we parsed
  // in the string. (e.g. "10Hi")
  if (arg_end != argv[1] + strlen(argv[1]) ||
      num_terms < 0) {
    Usage();
  }

  // Calculate and print the estimate.
  double estimate = 3.0;
  for (int i = 1; i <= num_terms; i++) {
    estimate += NthNilakantha(i);
  }
  printf("Our estimate of Pi is %.20f\n", estimate);

  // Quit.
  return EXIT_SUCCESS;
}

double NthNilakantha(int n) {
  // Calculate the Nth term in the Nilkantha series, according to the
  // formula provided in the exercise description.
  double term = 4.0;
  term /= 2.0 * n;
  term /= 2.0 * n + 1.0;
  term /= 2.0 * n + 2.0;
  if (n % 2 == 0)
    term *= -1.0;

  return term;
}

void Usage(void) {
  fprintf(stderr,
          "Usage: ./ex1 n, where n >= 0.  Prints Pi estimated "
          "to n terms of the Nilakantha series.\n");
  exit(EXIT_FAILURE);
}