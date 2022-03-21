#include <dirent.h>   // for directory ops
#include <stdio.h>    // for printf, snprintf
#include <stdlib.h>   // for EXIT_SUCCESS, malloc, free
#include <string.h>   // for strlen, strcmp, strrchr
#include <stdbool.h>  // for bool

#define BUFFER_SIZE 256


/*** HELPER FUNCTION DECLARATIONS ******************************************/

// Returns whether or not a filename ends in ".txt".
bool IsTxtFile(char* filename);

// Concatenate the directory and file names into a full path. The caller is
// responsible for freeing the allocated string. Exits if an error occurs.
char* Concatenate(char* dirname, char* filename);

// Print the content of the file to stdout. Returns false if an error occurs.
bool ReadAndPrintFile(char* fullpath);


/*
 * This program:
 * - Accepts a directory name as a command-line argument.
 * - Scans through the directory looking for all files whose names end with
 *   the four characters ".txt".
 * - For every such file found, read the contents of those files using the
 *   cstdio library and then write them without adding any additional
 *   characters or formatting to stdout using cstdio.
 */
int main(int argc, char** argv) {
  // Make sure that the user passed us a directory that we can open.
  if (argc != 2) {
    fprintf(stderr, "Usage: ./ex4 directory_name\n");
    return EXIT_FAILURE;
  }
  DIR* dir_p = opendir(argv[1]);
  if (dir_p == NULL) {
    perror("Open directory failed");
    return EXIT_FAILURE;
  }
  struct dirent* next_entry;
  // Iterate through, reading filenames.
  for (next_entry = readdir(dir_p);
        next_entry != NULL;
        next_entry = readdir(dir_p)) {
    char* entry_name = next_entry->d_name;
    // Only read if the filename ends in ".txt".
    if (IsTxtFile(entry_name)) {
      char* fullpath = Concatenate(argv[1], entry_name);
      if (!ReadAndPrintFile(fullpath)) {
        free(fullpath);
        closedir(dir_p);
        return EXIT_FAILURE;
      }
      free(fullpath);
    }
  }

  // Clean up and exit.
  closedir(dir_p);
  return EXIT_SUCCESS;
}


/*** HELPER FUNCTION DEFINITIONS *******************************************/

bool IsTxtFile(char* filename) {
  char* dot = strrchr(filename, '.');
  return dot && !strcmp(dot, ".txt");
}

char* Concatenate(char* dirname, char* filename) {
  bool has_trailing_slash = dirname[strlen(dirname) - 1] == '/';
  // Concatenate directory and file name.
  size_t dlen = strlen(dirname);
  size_t flen = strlen(filename);
  // Malloc space for full path name:
  // dlen + strlen("/") + flen + strlen('\0') = dlen + flen + 2
  int size_to_malloc = has_trailing_slash ? dlen + flen + 1 : dlen + flen + 2;
  char* fullpath = (char*) malloc(sizeof(char) * (size_to_malloc));
  if (fullpath == NULL) {
    fprintf(stderr, "Error on malloc.\n");
    exit(EXIT_FAILURE);
  }
  if (has_trailing_slash) {
    snprintf(fullpath, size_to_malloc, "%s%s", dirname, filename);
  } else {
    snprintf(fullpath, size_to_malloc, "%s/%s", dirname, filename);
  }
  return fullpath;
}

bool ReadAndPrintFile(char* fullpath) {
  char buf[BUFFER_SIZE];
  size_t res;

  // Open up the file.
  FILE* file = fopen(fullpath, "rb");
  if (file == NULL) {
    perror("fopen failed");
    return false;
  }

  // Loop through, reading the file BUFFER_SIZE byte chunks at a time.
  for (res = fread(buf, 1, BUFFER_SIZE, file);
       res > 0;  // no error and not EOF
       res = fread(buf, 1, BUFFER_SIZE, file)) {
    // Test to see if we encountered an error while reading.
    if (ferror(file)) {
      perror("fread failed");
      fclose(file);
      return false;
    }
    // Print out what we read.
    if (fwrite(buf, 1, res, stdout) != res) {
      perror("fwrite failed");
      fclose(file);
      return false;
    }
  }
  // Close file.
  fclose(file);
  return true;
}