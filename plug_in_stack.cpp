#include <bits/stdc++.h>

using namespace std;

int main() {
  std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  string word;
  cin >> word;

  stack<char> pila;

  int length = word.length();

  for(int i = 0; i < length ; i++) {
    if(pila.empty()) {
      pila.push(word.at(i));

      continue;
    }

    char ch = pila.top();

    if(ch != word.at(i)) {
      pila.push(word.at(i));
    } else {
      pila.pop();
    }
  }

  stack<char> output;

  while (!pila.empty()) {
    output.push(pila.top());
    pila.pop();
  }
  
  while (!output.empty()) {
    cout << output.top();
    output.pop();
  }

  return 0;
}
