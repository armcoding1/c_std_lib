#ifndef ARRAY_H
#define ARRAY_H

#include <stddef.h>

struct Array
{
  void *data;
  size_t size;
  size_t capacity;
};

void array_init(struct Array *arr);
void array_free(struct Array *arr);
void array_push(struct Array *arr, int value, size_t type_size);

#endif