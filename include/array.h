#pragma once

#include <stddef.h>

struct Array {
  void *data;
  size_t size;
  size_t capacity;
};

void array_init(struct Array *arr);
void array_free(struct Array *arr);