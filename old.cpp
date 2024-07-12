#include <bits/stdc++.h>

using namespace std;

int main() {
  string word;
  cin >> word;

  stack<char> pila;

  int length = word.length();

  for(int i = 0; i < length ; i++) {
    if(!pila.empty() && pila.top() == word[i]) {
      pila.pop();
    } else {
      pila.push(word[i]);
    }
  }

  int size = pila.size();
  string output = "";

  for (int i = 0; i < size; i++) {
    output = pila.top() + output;
    pila.pop();
  }

  cout << output;
}
