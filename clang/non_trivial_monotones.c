#include <stdio.h>

int main() {
  int boxes;
  scanf("%d", &boxes);

  char instring[boxes];

  int appers = 0;

  scanf("%s", &instring);

  int chunks = 0;

  for(int i=0; i < boxes; i++) {

    if(instring[i] == 'b') {
      if(chunks > 1) {
        appers += chunks;
      }

      chunks = 0;
    } else {
      chunks++;
    }
  }

  if(chunks > 1) {
    appers += chunks;
  }

  printf("%d", appers);

  return 0;
}
