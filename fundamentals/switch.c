#include <stdio.h>

int main() {
  int day = 5;

  switch (day) {
  /* constant-expression */
  case 1:
    /* code */
    printf("Monday.\n");
    break;
  case 2:
    printf("Tuesday.\n");
    break;
  case 3:
    printf("Wednesday.\n");
    break;
  case 4:
    printf("Thursday.\n");
    break;
  case 5:
    printf("Friday.\n");
    break;
  case 6:
    printf("Friday.\n");
    break;
  case 7:
    printf("Saturday.\n");
    break;
  default:
    printf("The week only has 7 days.\n");
  };
  return 0;
}