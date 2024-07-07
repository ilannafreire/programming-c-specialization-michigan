/*
You should write a function (no #include statements are needed) called htoi(str) that converts hexadecimal constant (base-16 0-9 and a-f) to an integer. 
There will not be a '0x' prefix (like in C) - just assume the input is a hex number. 
You should not use ctype.h and your code can assume the ASCII character set.
Each time you run the program, the values you need to convert 9875e (base-16) to 624478 (base-10) may be different each time you run the code.
*/

#include <stdio.h>


int htoi(char s[]);

int main() {
  printf("htoi('9875e') = %d\n", htoi("9875e"));
  printf("htoi('f') = %d\n", htoi("f"));
  printf("htoi('F0') = %d\n", htoi("F0"));
  printf("htoi('12fab') = %d\n", htoi("12fab"));
  return 0;
}

int htoi(char s[]) {
  int i, n;
  n = 0;

  for (i = 0; s[i] != '\0'; ++i) {
    int hex_value;
    if (s[i] >= '0' && s[i] <= '9') {
      hex_value = s[i] - '0';
    } else if (s[i] >= 'a' && s[i] <= 'f') {
      hex_value = s[i] - 'a' + 10;
    } else if (s[i] >= 'A' && s[i] <= 'F') {
      hex_value = s[i] - 'A' + 10;
    } else {
      // Not a valid hexadecimal digit, return 0
      return 0;
    }
    n = 16 * n + hex_value;
  }
  return n;
}
