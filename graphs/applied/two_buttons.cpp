#include <bits/stdc++.h>

using namespace std;

int target;
int pushes = 0;
int visited[1000000];
int found = 0;

void dfs(int k) {
  visited[k] = 1;
  int resp = 0;

  if(k == target) {
    found = 1;

    return;
  } 

  if(k <= 0) return;

  int blue = k - 1;
  int red = k * 2;

  if(!found) {
    pushes++;
  }

  if(red <= target) {
    if(!found && !visited[red]) {
      dfs(red);
    }
    
    if(!found && !visited[blue]) {
      dfs(blue);
    }
  } else {
    if(!found && !visited[blue]) {
      dfs(blue);
    }
    
    if(!found && !visited[red]) {
      dfs(red);
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  target = m;

  dfs(n);
  cout << pushes << endl;

  return 0;
}
