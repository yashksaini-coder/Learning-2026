#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  while (n != 0) {
    cout << n % 10 << endl;
    n /= 10;
  }

  return 0;
}
