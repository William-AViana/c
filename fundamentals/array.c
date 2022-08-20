#include <stdio.h>

int main() {
  int myArray[] = {10, 15, 20, 25};
  int i;

  printf("%d\n", myArray[1]);

  myArray[1] = 30;

  printf("%d\n", myArray[1]);

  for (i = 0; i < 4; i++){
    printf("%d\n", myArray[i]);
  }

  /*
    Using this method, you should know the size of the array, in order for the 
    program to store enough memory.
    You are not able to change the size of the array after creation.
  */
  int myArrayWithSizeFixed[4];

  myArrayWithSizeFixed[0] = 30;
  myArrayWithSizeFixed[1] = 40;
  myArrayWithSizeFixed[2] = 50;
  myArrayWithSizeFixed[3] = 60;
  
  printf("Array with size fixed:");
  for (i = 0; i < 4; i++){
    printf("%d\n", myArrayWithSizeFixed[i]);
  }
  
  return 0;
}