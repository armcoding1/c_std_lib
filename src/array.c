#include "../include/array.h"
#include <stdlib.h>
#include <string.h>

void array_init(struct Array *arr) {
  arr->data = NULL;
  arr->size = 0;
  arr->capacity = 0;
}

void array_free(struct Array *arr) {
  free(arr->data);
  arr->data = NULL;
  arr->size = 0;
  arr->capacity = 0;
}