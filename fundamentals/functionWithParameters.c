/* Sintaxe
 returnType funtionName (parameter1, parameter2) {
   code to be executed
 }

  Good pratices
    - Function declaration
    - The main method
    - Function definition
 */

#include <stdio.h>

// Function declaration
void printHelloUser(char name[]);

void printNameAndAge(char name[], int age);

int sum(int, int);

// The main method
int main() {

  printHelloUser("Wiliam");

  printNameAndAge("William", 32);

  // call function sum with arguments
  printf("Result is: %d\n", sum(3, 4));
  // storing in variable
  int result = sum(5, 3);
  printf("Result is: %d\n", result);

  return 0;
}

// Function definition
void printHelloUser(char name[]) {
  printf("Hello %s!\n", name);
}

void printNameAndAge(char name[], int age) {
  printf("Hello %s. You are %d years old. \n", name, age);
}

int sum(int x, int y) {
  return x + y;
}