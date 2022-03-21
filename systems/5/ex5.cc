

#include <iostream>   // for cin, cout, cerr
#include <cstdlib>    // for EXIT_SUCCESS, EXIT_FAILURE

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

// Prints out the factors for a user-supplied positive integer.
int main(int argc, char** argv) {
  int num;

  // Prompt the user for a number and read it into num.
  cout << "Which positive integer would you like me to factorize? ";
  cin >> num;

  // Stop if input is invalid or less than one (can't handle 0 or negative).
  if (!cin || num < 1) {
    cerr << "Input is not a valid positive integer" << endl;
    return EXIT_FAILURE;
  }

  // Check numbers from 1 to num to see if they are
  // factors of num and print the ones that are.
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      cout << (i == 1 ? "" : " ") << i;
    }
  }

  // Finish with an endline.
  cout << endl;
  return EXIT_SUCCESS;
}

