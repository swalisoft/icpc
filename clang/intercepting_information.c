#include <stdio.h>

int main() {
  int bits = 8;
  int count = 0;
  int num;
  char allIsBits = 'S';

  while (count < bits && scanf("%d", &num) == 1) {
    if(num == 9) {
      allIsBits = 'F';
    }

    count++;
  }

  printf("%c", allIsBits);

  return 0;
}
