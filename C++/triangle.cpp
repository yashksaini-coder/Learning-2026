#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n = 5;
  // cin >> n;
  for (int i = 1; n >= i; ++i) {
    for (int j = i; j <= n; ++j) {
      cout << n << " ";
    }
    cout << endl;
  }
  return 0;
}
