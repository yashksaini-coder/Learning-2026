#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int i, j;
  cin >> i >> j;

  if (i > 0 && j > 0)
    cout << "I Quadrant";
  else if (i < 0 && j > 0)
    cout << "II Quadrant";
  else if (i < 0 && j < 0)
    cout << "III Quadrant";
  else
    cout << "IV Quadrant";

  return 0;
}
