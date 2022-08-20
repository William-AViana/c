#include <stdio.h>

int main() {
  // char sequence of caracters
  char greetings[] = "Hello World!";
  printf("%s\n", greetings);

  // strings in C are array and can be accessed by index
  printf("%c\n%c\n", greetings[0], greetings[6]);

  // modify strings
  greetings[11] = 's';
  printf("%s\n", greetings);

  // Create string with character set, '\0' end of string indicator
  char greetings2[] = {'H', 'e', 'l' , 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  printf("%lu\n", sizeof(greetings2));
  printf("%lu\n", sizeof(greetings));

  return 0;
}