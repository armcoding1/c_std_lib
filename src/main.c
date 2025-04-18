#include "../include/array.h"  

int main() {
  struct Array int_array;
  array_init(&int_array);

  array_free(&int_array);
  return 0;
}
