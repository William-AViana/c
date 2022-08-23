#include <stdio.h>

int main() {
  int myNum;

  printf("Type a number: \n");

  scanf("%d", &myNum);

  printf("Yout number is: %d\n", myNum);

  char firstName[30];

  printf("Enter your firt name: ");

  scanf("%s", firstName);

  printf("Hello %s\n", firstName);

  return 0;
}