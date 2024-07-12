#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<ll> subset;
int n;
int i = 0;

void generator(int k, ll weights[], ll totals[]) {
  if(k == n) {
    int size = subset.size(); 
    ll total = 0; 
     
    for(int i = 0; i < size; i++) {
      // cout << subset.at(i) << ' ';
      total += subset.at(i);
    }

    // cout << " --->  " << total << endl;
    totals[i] = total;
    i++;
  } else {
    subset.push_back(weights[k]);
    generator(k + 1, weights, totals);

    subset.pop_back();
    generator(k + 1, weights, totals);
  }
}

int main() {
  cin >> n;

  int wi = 0;
  ll weight;
  ll weights[n];

  while (wi < n && cin >> weight) {
    weights[wi] = weight;

    wi++;
  }

  int np = pow(2, n);
  ll totals[np];

  generator(0, weights, totals);

  ll ans = INT_MAX;
  int middle = np / 2;

  for(int i = 0; i < middle; i++) {
    ll diff = abs(totals[i] - totals[np - i - 1]);  

    ans = min(ans, diff);
  }

  cout << ans << endl;

  return 0;
}
