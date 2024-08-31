#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

struct unionFind
{
  vector<int> p;

  unionFind(int n) : p(n, -1) {}

  int find(int x)
  {
    if (p[x] == -1)
      return x;

    return p[x] = find(p[x]);
  }

  bool join(int x, int y)
  {
    x = find(x), y = find(y);

    if (x == y)
      return 0;

    p[y] = x;

    return 1;
  }
};

struct RollbackUF
{
  vi e;
  vector<pii> st;

  RollbackUF(int n) : e(n, -1) {}

  int size(int x) { return -e[find(x)]; }
  int find(int x)
  {
    return e[x] < 0 ? x : find(e[x]);
  }

  int time()
  {
    return sz(st);
  }

  void rollback(int t)
  {
    for (int i = time(); i-- > t;)
      e[st[i].first] = st[i].second;
    st.resize(t);
  }

  bool join(int a, int b)
  {
    a = find(a), b = find(b);
    if (a == b)
      return false;
    if (e[a] > e[b])
      swap(a, b);

    st.push_back({a, e[a]});
    st.push_back({b, e[b]});

    e[a] += e[b];
    e[b] = a;

    return true;
  }
};

int main()
{
  int n = 5;
  RollbackUF conjuntos(n + 1);

  conjuntos.join(5, 3);
  conjuntos.join(3, 5);
  conjuntos.join(1, 3);
  conjuntos.join(3, 1);

  for (int i = 1; i <= n; ++i)
  {
    cout << "ID de " << i << ": " << conjuntos.find(i) << endl;
  }
}
