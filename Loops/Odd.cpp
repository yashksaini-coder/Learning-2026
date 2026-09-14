#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, i = 1;
  cin >> n;

  while (i <= n) {
    if (i % 2 != 0) {
      cout << i << endl;
    }
    i++;
  }

  return 0;
}
