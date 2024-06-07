#include <stdio.h>

int main() {
  char message[] = "Hello, world!\n";
  int i = 0;

  while (message[i]) {
    putchar(message[i]);
    i++;
  }

  return 0;
}
