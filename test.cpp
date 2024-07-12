#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

int main() {
  auto start = high_resolution_clock::now();

  string s;
  cin >> s;

  stack<char> sta;

  int length = s.length();

  for (int i = 0; i < length; i++) {
    if (sta.empty()) {
      sta.push(s.at(i));
      continue;
    }

    char ch = sta.top();
    if (s.at(i) != ch) {
      sta.push(s.at(i));
    } else {
      sta.pop();
    }
  }

  stack<char> stal;

  while (!sta.empty()) {
    stal.push(sta.top());
    sta.pop();
  }

  while (!stal.empty()) {
    cout << stal.top();
    stal.pop();
  }

  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);

  cout << endl << duration.count() << " microseconds" << endl;

  return 0;
}
