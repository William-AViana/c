#include <stdio.h>

int main() {
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;

  printf("int %lu bytes\n", sizeof(myInt));
  printf("float %lu bytes\n", sizeof(myFloat));
  printf("double %lu bytes\n", sizeof(myDouble));
  printf("char %lu bytes\n", sizeof(myChar));
}