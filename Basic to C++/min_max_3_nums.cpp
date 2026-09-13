#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, y, z;
  cin >> x >> y >> z;

  if (x > y && x > z)
    cout << x << endl;
  else if (y > x && y > z)
    cout << y << endl;
  else
    cout << z << endl;

  return 0;
}
