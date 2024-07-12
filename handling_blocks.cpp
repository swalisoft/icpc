#include <iostream>
#include <cstdio>

using std::cin;
using std::cout;

int main() {
  std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int blocks, colors;

  cin >> blocks >> colors;

  int positionColor [1000000 + 1];
  int arrBlockColors [blocks][2];

  for(int i = 0; i < blocks; i++) {
    int block, color;

    cin >> block >> color;

    arrBlockColors[i][0] = block;
    arrBlockColors[i][1] = color;

    positionColor[block] = color;
  }

  char arranged = 'Y';

  for(int i = 0; i < blocks; i++) {
    int block = arrBlockColors[i][0];
    int color = arrBlockColors[i][1];

    int ideal = i + 1;

    if(block != ideal && positionColor[ideal] != color) {
      arranged = 'N';
      break;
    }
  }

  cout << arranged;
}
