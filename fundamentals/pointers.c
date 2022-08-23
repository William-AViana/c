#include <stdio.h>

int main() {
  int age = 31;

  printf("%d\n", age);

  printf("%p\n", &age);

  int oneMoreYear = 32;
  int* ptrOneMoreYear = &oneMoreYear;

  printf("%d\n", oneMoreYear);

  printf("%p\n", &oneMoreYear);

  // Reference: Output the memory address of myAge with the pointer (0x7fff55e64a0c)
  printf("%p\n", ptrOneMoreYear);

  // Dereference:  Output the value of oneMoreYear with the pointer (32)
  printf("%d\n", *ptrOneMoreYear);

  return 0;
}