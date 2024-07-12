#include <iostream>
#include <cstdio>

using std::cin;
using std::cout;

int main() {
  std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int bits = 8, count = 0, num;
  char allAreBits = 'S';

  while (count < bits && cin >> num) {
    if(num == 9) {
      allAreBits = 'F';
    }

    count++;
  }

  cout << allAreBits;

  return 0;
}
