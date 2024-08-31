#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

typedef long long ll;

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
void miniMaxSum(vector<ll> arr)
{
  ll minv = arr.front();
  ll maxv = arr.front();
  ll total = 0;

  for (ll el : arr)
  {
    minv = min(minv, el);
    maxv = max(maxv, el);

    total += el;
  }

  cout << (total - maxv) << " " << (total - minv) << endl;
}

int main()
{
  vector<ll> arr(5);
  // vector<string> arr_temp = split(arr_temp_temp);

  for (int i = 0; i < 5; i++) {
    cin >> arr[i]; 
  }

  miniMaxSum(arr);

  return 0;
}

vector<string> split(const string &str)
{
  vector<string> tokens;

  string::size_type start = 0;
  string::size_type end = 0;

  while ((end = str.find(" ", start)) != string::npos)
  {
    tokens.push_back(str.substr(start, end - start));

    start = end + 1;
  }

  tokens.push_back(str.substr(start));

  return tokens;
}
