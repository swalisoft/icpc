#include <stdio.h>

int main() {
  int disposition, tiring, enjoying;
  scanf("%d %d %d", &disposition, &tiring, &enjoying);

  int accumulation = enjoying;
  int total = tiring + enjoying;

  int tiring_act [tiring];

  for (int i = 0; i < total; i++) {
    int num;
    scanf("%d", &num);

    if(i >= tiring) {
      disposition += num;
    } else {
      tiring_act[i] = num;
    }
  }

  for (int i = 0; i < tiring ; i++) {
    if(disposition >= tiring_act[i]) {
      disposition -= tiring_act[i];
      accumulation++;
    } else {
      break;
    }
  }

  printf("%d", accumulation);

  return 0;
}
