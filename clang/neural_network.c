#include <stdio.h>
// https://stackoverflow.com/questions/50087651/c-determinable-array-input-in-one-line

int main() {
  int layers;

  scanf("%d", &layers);

  int numbers[layers];
  int count = 0;
  int num;

  while (count < layers && scanf("%d", &num) == 1) {
    numbers[count] = num;
    count++;
  }

  int accumulation = 0;

  for (int i = 1; i < count; i++) {
    accumulation += numbers[i] * numbers[i - 1]; 
  }

  printf("%d", accumulation);

  return 0;
}
