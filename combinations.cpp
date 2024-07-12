#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll factorial(int n, int topper = 1) {
  ll result = 1;

  while (n >= topper)
  {
    result *= n;
    n--;
  }

  return result;
}

ll combinations(int n, int r) {
  int subs = n - r;
  int topper = max(subs, r);

  ll dividend = factorial(n, topper);
  ll divisor = factorial(min(r, subs));

  return dividend / divisor;
}

void binomial(int n, vector<ll> &result) {
  int lim = n + 1;
  int MOD = 1000000000;
  ll bin[lim][lim] = {};

  for(int i = 0; i < lim; i++) {
    bin[i][0] = 1;
  }

  for (int i = 1; i < lim; i++) {
    int stop = i + 1;

    for (int j = 1; j < stop; j++) {
      int left = bin[i-1][j];
      int right = bin[i-1][j-1];

      bin[i][j] = (left + right) % MOD; 

      if(i == n) {
        result[j] = bin[i][j]; 
      }
    }
  }

  result[0] = 1;
}

int main() {
  int t;
  cin >> t;
  vector<vector<ll>> bag(t);

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    int size = n + 1;
    vector<ll> result(size);

    binomial(n, result);

    bag[i] = result;
  }

  for(vector<ll> coll : bag) {
    int size = coll.size();

    for(int i=0; i < size; i++) {
      if (i == size-1) {
        cout << coll[i] << endl;
      } else {
        cout << coll[i] << " ";
      }
    }
  }

  return 0;
}
