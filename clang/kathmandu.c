#include <stdio.h>

int main() {
  int rest, total, meals;
  scanf("%d %d %d", &rest, &total, &meals);

  char canRest = 'N';
  int maxRange = 0;
  int start = 0;

  for (int i = 0; i < meals; i++) {
    int num;
    scanf("%d", &num);

    if((num - start) > maxRange) {
      maxRange = num - start;
    }

    start = num; 
  }

  if((total - start) > maxRange) {
    maxRange = total - start;
  }

  if(maxRange >= rest) {
    canRest = 'Y';
  }

  printf("%c", canRest);

  return 0;
}
