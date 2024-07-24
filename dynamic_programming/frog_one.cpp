#include <bits/stdc++.h>

using namespace std;

vector<int> stones;
int n;

int stone_cost(int i, int j) {
  if(j >= n) return 0;

  return min(stone_cost(j, j+1), stone_cost(j, j+2));
}

int main() {
  std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  cin >> n;
  // int stones[n];

  for(int i = 0; i < n; i++) {
    cin >> stones[i];
  }

  // int _min = 0;
  // for(int i = n-1; i >= 1; i--) {
  //   int op1 = abs(stones[i] - stones[i-1]);

  //   if(i - 2 < 0) {
  //     _min += op1;
  //     break;
  //   } 

  //   int op2 = abs(stones[i] - stones[i-2]);

  //   if(op2 <= op1) {
  //     _min += op2;
  //     i--;
  //   } else {
  //     _min += op1;
  //   }
  // }
  
  // cout << _min << endl;

  return 0;
}
