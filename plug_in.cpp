#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

void remove_pair(string word) {
  int size = word.size() ;
  string next;

  for (int i = 0; i < size; i++) {
    if(i < size && word[i] == word[i+1]) {
      i++;
    } else {
      next += word[i];
    }
  }

  if(next.size() == size) {
    cout << next;
  } else {
    remove_pair(next);
  }
}

int main() {
  std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  auto start = high_resolution_clock::now();

  string word;

  cin >> word;

  remove_pair(word);

  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);


  cout << endl << duration.count() << " microseconds" << endl;
}
