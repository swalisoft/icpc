#include <bits/stdc++.h>

using namespace std;

void hanoi(int n, int source, int dest, int aux) {
  if(n == 1) {
    cout << source << ' ' << dest << endl;
  } else {
    hanoi(n - 1, source, aux, dest);

    cout << source << ' ' << dest << endl;

    hanoi(n - 1, aux, dest, source);
  }
}

int main() {
  int n;
  cin >> n;

  int outputs = pow(2, n) - 1;
  cout << outputs << endl;

  hanoi(n, 1, 3, 2);

  return 0;
}
