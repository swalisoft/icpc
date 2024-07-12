#include <stdio.h>

int main() {
  int boxes, num, count = 0;
  scanf("%d", &boxes);

  int max_score = 100;
  int balance = 100;

  while (count < boxes && scanf("%d", &num) == 1) {
    count++;

    balance += num;

    if(balance > max_score) {
      max_score = balance;
    }
  }

  printf("%d", max_score);

  return 0;
}
