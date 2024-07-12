#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::set;
using std::string;
using std::endl;

int main() {
  std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int total, n, m;

  cin >> total;

  int count[total]; 

  for(int i = 0; i < total; i++) {
    int size;
    string data;
    set<string> melodies;


    cin >> size;
    cin >> data;

    for(int j = 0; j < size - 1; j++) {
      melodies.insert(data.substr(j, 2));
    }

    count[i] = melodies.size();
  }

  for(int i = 0; i < total; i++) {
    cout << count[i] << endl;
  }
}
