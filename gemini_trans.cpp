#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  int n, m, cd;
  int count;

  while (true) {
    cin >> n >> m;

    if (n == 0 && m == 0) {
      break;
    }

    unordered_set<int> jackCDs;

    for (int i = 0; i < n; i++) {
      cin >> cd;
      jackCDs.insert(cd);
    }

    count = 0;
    for (int j = 0; j < m; j++) {
      cin >> cd;
      if (jackCDs.count(cd) > 0) {
        count++;
      }
    }

    cout << count << endl;
  }

  return 0;
}
