#include <stdio.h>

int main() {
  int ballons, num, count = 0, arrows = 0;
  scanf("%d", &ballons);

  int numbers[ballons];

  while (count < ballons && scanf("%d", &num) == 1) {
    numbers[count] = num;
    count++;
  }

  int stack_size = ballons;
  int stack_i = 0;
  int i = 0;

  while(i < stack_size) {
    int height = numbers[i];
    arrows++;

    if(height == 1) {
      i++;
      continue;
    }

    for(int j = i + 1; j < stack_size; j++) {
      if(numbers[j] != (height - 1)) {
        numbers[stack_i] = numbers[j]; 
        stack_i++;
      } else {
        height--;
      }
    }

    if(stack_i == 0) {
      break;
    } else {
      i = 0;
      stack_size = stack_i;
      stack_i = 0;
    }
  }

  printf("%d", arrows);

  return 0;
}
