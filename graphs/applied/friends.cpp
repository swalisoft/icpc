#include <bits/stdc++.h>

using namespace std;
vector<int> vis(30000 + 1);

int dfs(int node, vector<set<int>> &g) {
  vis[node] = 1;
  int total = 1;

  for(int x : g[node])
    if(!vis[x]) {
      total += dfs(x, g);
  }

  return total;
}

int prosess_dataset() {
  int n, m;
  cin >> n >> m;
  int maximum = 0;

  vector<set<int>> g(n + 1);
  vector<int> aux(30000 + 1);
  vis = aux;

  for(int i=0; i<m; i++) {
    int a, b;

    cin >> a >> b;

    g[a].insert(b);
    g[b].insert(a);
  }

  for(int i = 1; i <= n; i++) {
    if(!vis[i]) {
      int total = dfs(i, g);

      maximum = max(maximum, total); 
    }
  }
  
  return maximum;
}

int main() {
  int sets;
  cin >> sets;

  int results[sets];

  for(int i=0; i < sets; i++) {
    results[i] = prosess_dataset();
  }

  for(int i=0; i < sets; i++) {
    cout << results[i] << endl;
  }

  return 0;
}
