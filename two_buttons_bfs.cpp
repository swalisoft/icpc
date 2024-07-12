#include <bits/stdc++.h>

using namespace std;

int target;
int g[1000000][2];

void bfs(int v) {
  vector<int> dis(1000000, -1);
  queue<int> q;

  dis[v] = 0;
  q.push(v);

  while (!q.empty()) {
    int node = q.front();
    q.pop();
    
    if(node == target) {
      cout << dis[node] << endl;

      return;
    }

    g[node][0] = node * 2;
    g[node][1] = node - 1;

    for (int x : g[node]) {
      if (dis[x] == -1 && x > 0 && x <= 10000) {
        dis[x] = dis[node] + 1;

        q.push(x);
      }
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  target = m;

  bfs(n);

  return 0;
}
