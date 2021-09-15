

#include "hash_table.h"

// Driver program 
int main()
{
  // array that contains keys to be mapped
  int a[] = {15, 11, 27, 8, 12, 69,12,100,90};
  int n = sizeof(a)/sizeof(a[0]);
  
  // insert the keys into the hash table
  Hash h(7);   // 7 is count of buckets in
               // hash table
  for (int i = 0; i < n; i++) 
    h.insertItem(a[i]);  
  
  // delete 12 from hash table
  h.deleteItem(12);
  
  // display the Hash table
  h.displayHash();
 
}