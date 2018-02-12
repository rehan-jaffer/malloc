#include "stddef.h"

struct header_t {
  size_t size;
  unsigned is_free;
  struct header_t *next;
};

void *malloc(size_t size)
{
  void *block;
  block = sbrk(size);
  if (block == (void*) -1)
    return NULL;

  return block;

}

void main() {

  int s = malloc(4);
  printf("%d\r\n", s);

}
