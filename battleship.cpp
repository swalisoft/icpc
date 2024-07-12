#include <iostream>
#include <cstdio>

using std::cin;
using std::cout;

int main() {
  std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int rows, columns = 4, ci, pos;

  cin >> rows;

  int ships[rows][columns];
  int grid[10][10];
  char correct = 'Y';

  for(int i = 0; i < rows; i++) {
    ci = 0;

    while (ci < columns && cin >> pos) {
      ships[i][ci] = pos;

      ci++;
    }

    int d = ships[i][0]; 
    int l = ships[i][1]; 
    int r = ships[i][2] - 1; 
    int c = ships[i][3] - 1; 

    int top = d == 0 ? c + l : r + l;

    int initial = d == 0 ? c : r; 

    for(int j = initial; j < top; j++) {
      if(d == 0) {
        c = j;
      } else {
        r = j;
      }

      if(grid[r][c] == 1 || c > 9 || r > 9) {
        correct = 'N'; 
      } else {
        grid[r][c] = 1;
      }
    }
  }

  cout << correct;
}
