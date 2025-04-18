#include "array.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void array_init(struct Array *arr)
{
  arr->data = NULL;
  arr->size = 0;
  arr->capacity = 0;
}

void array_free(struct Array *arr)
{
  free(arr->data);
  arr->data = NULL;
  arr->size = 0;
  arr->capacity = 0;
}

void array_push(struct Array *arr, int value, size_t type_size)
{
  if (arr->size >= arr->capacity)
  {
    arr->capacity = arr->capacity ? arr->capacity * 2 : 1;
    int *tmp = realloc(arr->data, arr->capacity * sizeof(int));

    if (!tmp)
    {
      perror("Realloc failed.");
      exit(EXIT_FAILURE);
    }

    arr->data = tmp;
  }

  memcpy((char *)arr->data + arr->size * type_size, value, type_size);

  arr->size++;
}