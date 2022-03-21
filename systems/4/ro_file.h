#ifndef RO_FILE_H_
#define RO_FILE_H_

#include <sys/types.h>

// The struct that holds the file management information, including its
// current state.
typedef struct ro_file_st RO_FILE;

// Opens the specified file in read-only mode.
// Returns NULL on error.
RO_FILE* ro_open(char* filename);

// Reads in 'len' bytes from the file into the user buffer 'ptr'.
// Assumes that 'ptr' has sufficient space for 'len' bytes.
// Returns the number of bytes read, or -1 on error.
ssize_t ro_read(char* ptr, size_t len, RO_FILE* file);

// Returns the current position within the file.
off_t ro_tell(RO_FILE* file);

// Moves the file pointer to a new position in the file specified by an offset
// relative to the "whence" directive:
//  - SEEK_SET: From the beginning of the file
//  - SEEK_END: From the end of the file
//  - SEEK_CUR: From the current position
// Returns 0 on success, 1 on error.
// Example: ro_seek(file, 5, SEEK_CUR) moves the file pointer 5 bytes forward.
int ro_seek(RO_FILE* file, off_t offset, int whence);

// Closes the file specified.
// Returns 0 on success, or non-zero on error.
int ro_close(RO_FILE* file);

#endif  // RO_FILE_H_