#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x, y;
  cin >> x >> y;
  x %= 10;
  y %= 10;
  cout << x + y;

  return 0;
}
