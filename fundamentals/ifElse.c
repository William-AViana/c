#include <stdio.h>

int main() {
  int x = 20;
  int y = 18;
  if(x > y){
    printf("X is greater than Y.\n");
  } 
  
  int time = 10;

  if(time < 12){
    printf("Good day.\n");;
  } else {
    printf("Good evening.\n");
  }

  time = 22;
  if(time < 10) {
    printf("Good morning.\n");
  } else if(time < 20) {
    printf("Good day.\n");
  } else {
    printf("Good evening.\n");
  }

  int myNum = 2;
  if(myNum > 0) 
    printf("The value is a positive number.\n");
  else if (myNum < 0)
    printf("The value is a negative number.\n");
  else 
    printf("The value is 0.\n");

  // short hand
  // variable = (condition) ? expressionTrue : expressionFalse;
  time = 15;
  (time < 18) ? printf("Good day.") : printf("Good evening.");
  
  return 0;
}