#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n = 3;
vector<int> permutation;
bool chose[3 + 1];

void generator()
{
  if (permutation.size() == n)
  {
    for (int i = 0; i < n; i++)
    {
      cout << permutation[i];
    }

    cout << endl;
  }

  else
  {
    for (int i = 1; i <= n; i++)
    {
      if (chose[i])
        continue;

      chose[i] = true;
      permutation.push_back(i);

      generator();

      chose[i] = false;
      permutation.pop_back();
    }
  }
}

int main()
{
  generator();
}