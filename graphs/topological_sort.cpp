#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<int> topSort(vector<vector<int>> &g, vector<int> in)
{
  int n = in.size();
  vector<int> topo;
  queue<int> q;

  for (int i = 0; i < n; i++)
    if (in[i] == 0) q.push(i);

  while (!q.empty())
  {
    int node = q.front();
    q.pop();
    topo.push_back(node);

    for (int x : g[node])
      if (--in[x] == 0)
        q.push(x);
  }

  return topo;
}
