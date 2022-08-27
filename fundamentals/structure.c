#include <stdio.h>
#include <string.h>

struct person {
  int age;
  char name[30];
};

int main() {
  // create a variable
  struct person person1;

  person1.age = 30;
  // assigning value this way is incorrect for an array of characters
  // person1.name = 'William';

  // assign value correctly
  strcpy(person1.name, "William");

  struct person person2 = {35, "Graziela"};

  struct person copyPerson2;

  copyPerson2 = person2;

  printf("Person 1 name: %s, age: %d\n", person1.name, person1.age);
  printf("Person 1 name: %s, age: %d\n", person2.name, person2.age);
  printf("Copy Person 2 name: %s, age: %d\n", copyPerson2.name, copyPerson2.age);

  return 0;

}
