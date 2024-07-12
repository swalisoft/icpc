#include <iostream>
#include <cstdio>

using std::cin;
using std::cout;

int main() {
  std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int rides, count = 0, num, height;
  int allowed = 0;

  cin >> rides >> height;

  while (count < rides && cin >> num) {
    if(height >= num) {
      allowed++;
    }

    count++;
  }

  cout << allowed;

  return 0;
}
