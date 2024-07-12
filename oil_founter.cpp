#include <bits/stdc++.h>

using namespace std;

int n, m;
int dir[2][8] = {
  {0, 0, 1, -1, 1, -1, 1, -1},
  {1, -1, 0, 0, 1, -1, -1, 1}
};
int max_size = 500; 

vector<vector<int>> gr, visi;

int floodfill(int x, int y) {
  if (
    x < 0 || y < 0 ||
    x >= m || y >= n ||
    visi[x][y] || gr[x][y] == 0
  ) return 0;

  visi[x][y] = 1;

  int ret = 1;

  for (int i = 0; i < 8; i++) {
    ret += floodfill(x + dir[0][i], y + dir[1][i]);
  }

  return ret;
}

int main() {
  while (true) {
    cin >> m >> n;
    vector<vector<int>> gr_aux(100), visi_aux(100);
    int counter = 0;

    if(m == 0) break;

    for(int i=0; i < m; i++) {
      char cols[n];
      cin >> cols;

      for(int j=0; j < n; j++) {
        int val = cols[j] == '*' ? 0 : 1; 

        gr_aux[i].push_back(val);
        visi_aux[i].push_back(0);
      }
    }

    gr = gr_aux;
    visi = visi_aux;

    for(int i=0; i < m; i++) {
      for(int j=0; j < n; j++) {
        if(!visi[i][j] && gr_aux[i][j] == 1) {
          int founds = floodfill(i, j);

          counter++;
        }
      }
    }

    cout << counter << endl;
  }
  
  return 0;
}
