#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int PTOP = 1000;

bitset<PTOP + 10> criba;
vector<int> primos;

void cribon() {
  criba.set();
  criba[0] = criba[1] = 0;

  for (int i = 2; i * i <= PTOP; i++) {
    if (criba[i]) {
      primos.push_back(i);

      for (int j = 2 * i; j * j <= PTOP; j += i) {
        criba[j] = 0;
      }
    }
  }
}

tuple<int,int,int> euclid(int a, int b) {
 if (b == 0) {
  return {1,0,a};

 } else {
  int x,y,g;

  tie(x,y,g) = euclid(b, a%b);

  return {y, x - (a/b)*y, g};
 }
}

int main() {
  cribon();

  for(int item : primos) {
    cout << item << endl;
  }  

  int x,y,g;
  tie(x,y,g) = euclid(28, 3); 

  int res = gcd(12, 3);

  cout << res << endl;

  cout << x << endl;
  cout << y << endl;
  cout << g << endl;
}
