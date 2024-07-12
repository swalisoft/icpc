#include <bits/stdc++.h>

using namespace std;

int main() {
  // std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  while(true) {
    int n, m;
    cin >> n >> m;

    if(n == 0 && m == 0) {
      break;
    }

    unordered_set<int> jackCds;
    int count = 0;

    int total = n + m;

    for(int i = 0; i < total; i++) {
      int cat;

      cin >> cat;

      if(i < n) {
        jackCds.insert(cat);
      } else if(jackCds.count(cat) > 0) {
        count++;
      }
    }

    cout << count << endl;
  }
}
