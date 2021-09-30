#include <iostream>
using namespace std;


class ProxyPat {
   private:
      int * my_ptr;
   public:
      ProxyPat(int& r) : my_ptr(&r) {
      }
      void operator = (int n) {
         if (n > 1) {
            throw "This is not a binary digit";
         }
         *my_ptr = n;
      }
};
class BinaryArray {
   private:
      int binArray[10];
   public:
      ProxyPat operator[](int i) {
         return ProxyPat(binArray[i]);
      }
      int item_at_pos(int i) {
         return binArray[i];
      }
};
int main() {
   BinaryArray a;
   try {
      a[0] = 1; // No exception
      cout << a.item_at_pos(0) << endl;
   }
   catch (const char * e) {
      cout << e << endl;
   }
   try {
      a[1] = 98; // Throws exception
      cout << a.item_at_pos(1) << endl;
   }
   catch (const char * e) {
      cout << e << endl;
   }
}