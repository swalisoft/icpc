#include <stdio.h>

int main() {
  int balloons, num, count = 0, arrows = 0;
  scanf("%d", &balloons);

  int numbers[balloons];

  while (count < balloons && scanf("%d", &num) == 1) {
    numbers[count] = num;
    count++;
  }

  int popped [1000000 + 1];
  int top = 0; 

  for (int i = 0; i < balloons; i++) {
    int curr = numbers[i];

    if (curr + 1 == popped[curr]) {
      arrows++;
      popped[curr - 1] =  curr; 
    } else if(!popped[curr]) {
      arrows++;
      popped[curr - 1] =  curr; 
    }
  }

  printf("%d", arrows);

  return 0;
}
