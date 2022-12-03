https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef MYMALLOC_HEADER
#define MYMALLOC_HEADER

#include <stddef.h>

// Word alignment
const size_t kAlignment = sizeof(size_t);
// Minimum allocation size (1 word)
const size_t kMinAllocationSize = kAlignment;
// Maximum allocation size (16 MB)
extern const size_t kMaxAllocationSize;
// Arena size is 4 MB
const size_t ARENA_SIZE = (4ull << 20);

void *my_malloc(size_t size);
void my_free(void *p);

#endif
