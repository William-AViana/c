#include <stdio.h>

int sum(int);

int main() {
  int result = sum(20);
  printf("%d\n", result);

  return 0;
}

int sum(int x) {
  if(x > 0) {
    // 10 + ( 9 + ( 8 + sum(7) ) )...
    return x + sum(x -1);
  } else {
    return 0;
  }
}