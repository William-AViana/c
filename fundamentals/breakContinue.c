#include <stdio.h>

int main() {
  int i;
  printf("For with break:\n");
  for (i = 0; i < 10; i++){
    // This example jumps out of the loop when i is equal 4
    if( i == 4){
      printf("Jump when 'i' equal 4\n");
      break;
    }
    printf("%d\n", i);
  }

  i = 0;

  printf("For with continue:\n");
  for ( i = 0; i < 10; i++){
    // This example skips the value of 4:
    if(i == 4){
      printf("Skip when 'i' equal is 4 \n");
      continue;
    }
    printf("%d\n", i);
  }

  i = 0;

  printf("break and continue with while:\n");
  while (i < 10){
    if(i == 5){
      printf("break when 'i' equal 5.\n");
      break;
    }
    printf("%d\n", i);
    i++;
  }

  i = 0;
  
  while (i < 10){
    if(i == 5){
      i++;
      printf("continue when 'i' is equal 5.\n");
      continue;
    }
    printf("%d\n", i);
    i++;
  }
  
  return 0;
}