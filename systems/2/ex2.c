#include <stdio.h>       // for printf
#include <stdlib.h>      // for EXIT_SUCCESS
#include <inttypes.h>    // for uint8_t, PRIx8, etc.

// Size of data arrays
#define ARRAY_SIZE 11


// Copy len elements from source to dest, placing elements
// in dest in non-decreasing order.
void CopyAndSort(uint8_t source[], uint8_t dest[], int len);

// Given that array[0..len-1] is sorted in non-decreasing order, add
// num to array in the proper place so that array[0..len] is sorted.
// precondition: len > 0.
void DoInsert(uint8_t num, uint8_t array[], int len);

// Prints the parameter byte_len in decimal,
// the address held by the parameter data in hex,
// and byte_len bytes in hex starting at data
void DumpBytes(void* data, int32_t byteLen);

// Note that we pass in sizeof(arr) / sizeof(uint8_t)
// since the sizeof(array) is the length * sizeof(element)
int main(int argc, char* argv[]) {
  int32_t int_val = 1;
  float   float_val = 1.0f;
  uint8_t arr_unsorted[] = {3, 2, 0, 8, 17, 6, 10, 7, 8, 1, 12};
  uint8_t arr_sorted[]   = {0, 0, 0, 0,  0, 0,  0, 0, 0, 0,  0};

  DumpBytes(&int_val, sizeof(int_val));
  DumpBytes(&float_val, sizeof(float_val));
  DumpBytes(arr_unsorted, sizeof(arr_unsorted));
  CopyAndSort(arr_unsorted, arr_sorted, ARRAY_SIZE);
  DumpBytes(arr_sorted, sizeof(arr_sorted));

  return EXIT_SUCCESS;
}

void CopyAndSort(uint8_t source[], uint8_t dest[], int len) {
  // Note how this would only dump 8 bytes since sizeof(source)
  // is only 8 bytes, not the length of the array.
  DumpBytes(source, sizeof(source));

  // Deal with the degenerate case of a zero-length array
  // (nothing to do in that case)
  if (len == 0) {
    return;
  }

  // Insertion sort
  // Copy first element
  dest[0] = source[0];

  // Insert remaining entries in order in dest.
  for (int i = 1; i < len; i++) {
    DoInsert(source[i], dest, i);
  }
}

void DoInsert(uint8_t num, uint8_t array[], int len) {
  // precondition: len > 0 && array[0..len-1] sorted in non-decreasing order
  int i = len;
  // invariant: array[0..i-1] not checked and array[i+1..len] > num.
  while (i > 0 && array[i-1] > num) {
    array[i] = array[i-1];
    i--;
  }
  // array[0..i-1] <= num && array[i+1..len] > num
  array[i] = num;
}


void DumpBytes(void* pData, int32_t byteLen) {
  uint8_t* ptr = (uint8_t*) pData;
  printf("The %" PRId32 " bytes starting at 0x%" PRIxPTR " are: ",
         byteLen, (uintptr_t) pData);

  for (int i = 0; i < byteLen; i++) {
    printf("%s%02" PRIx8, (i > 0 ? " " : ""), ptr[i]);
  }
  printf("\n");
}