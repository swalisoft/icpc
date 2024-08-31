#include <bits/stdc++.h>

using namespace std;
vector<int> vis(50000 + 1);

void dfs(int node, vector<set<int>> &g) {
  vis[node] = 1;

  for(int x : g[node]) {
    if(!vis[x]) {
      dfs(x, g);
    }
  }
}

int main() {
  int cases = 0;

  while(true) {
    int n, m;
    cin >> n >> m;

    if(n == 0 && m == 0) {
      break;
    }

    int count = 0;
    cases++;

    vector<set<int>> g(n + 1);
    vector<int> aux(50000 + 1);
    vis = aux;

    for(int i=0; i<m; i++) {
      int a, b;

      cin >> a >> b;

      g[a].insert(b);
      g[b].insert(a);
    }

    for(int i = 1; i <= n; i++) {
      if(!vis[i]) {
        dfs(i, g);

        count++;
      }
    }

    cout << "Case " << cases << ": " << count << endl;
  }

  return 0;
}
