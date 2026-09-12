#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, y;
  cin >> x >> y;

  if (x > y)
    cout << x << endl;
  else if (x < y)
    cout << y << endl;
  else
    cout << "Both are same";

  return 0;
}
