#include <cstdlib>    // for EXIT_FAILURE, EXIT_SUCCESS

#include <iostream>   // for std::{err, cin, cout, endl}
#include <fstream>    // for std::ifstream
#include <string>     // for std::string
#include <map>        // for std::map

using std::cout;
using std::cerr;
using std::endl;
using std::ifstream;
using std::string;
using std::map;

// Notes:

// This version of the ifstream constructor opens the file and leaves
// the file in a good state if success, otherwise the stream returns
// false if tested.  We do not need to explicitly close the file since
// that is done by the ifstream destructor.

// When using a map, if m[key] is referenced and no <key, value> pair
// exists in the map, an entry is created using default initialization
// for the value, which is 0 for integers.

// Read the next type "T" thing from input stream "in". Sets the output
// parameter and returns true on success. Returns false when a value
// can't be read from the ifstream.
template <typename T> bool ReadValue(ifstream& in, T* out);

// Read the text file given as the program argument and print a sorted
// list of words found in it and how often each word occurs.
int main(int argc, char** argv) {
  // check that an argument is supplied
  if (argc != 2) {
    cerr << "Usage: ./ex8 filename" << endl;
    return EXIT_FAILURE;
  }

  // Create stream and open for reading.  Exit if there is a failure.
  ifstream infile(argv[1], ifstream::in);
  if (!infile) {
    cerr << "Unable to open file: " << argv[1] << endl;
    return EXIT_FAILURE;
  }

  // read words from file and count number of occurrences of each
  string word;
  map<string, size_t> freq;   // map of <word, #occurrences> pairs
  while (ReadValue<string>(infile, &word)) {
    ++freq[word];
  }

  // if input failed for some reason other than eof, report error
  if (!infile.eof()) {
    cerr << "Error reading file: " << argv[1] << endl;
    return EXIT_FAILURE;
  }

  // print words and frequencies in sorted order
  for (const auto& w : freq) {
    cout << w.first << " " << w.second << endl;
  }

  return EXIT_SUCCESS;
}

// ReadValue implementation
template <typename T> bool ReadValue(ifstream& in, T* output) {
  T next;

  // Try do to the conversion; check on in.fail() afterwards.
  in >> next;
  if (in.fail()) {
    return false;
  }
  *output = next;
  return true;
}