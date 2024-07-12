#include <stdio.h>

int main() {
  int half, halfTwo, total;

  scanf("%d %d %d", &half, &halfTwo, &total);

  if((half + halfTwo) == total ) {
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}
