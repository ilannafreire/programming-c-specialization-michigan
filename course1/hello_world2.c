#include <stdio.h>

int main() {
  char message[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\n'};
  int i = 0;

  while (message[i] != '\0') {
    printf("%c", message[i]);
    i++;
  }

  return 0;
}
