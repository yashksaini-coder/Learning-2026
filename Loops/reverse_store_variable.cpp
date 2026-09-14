#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, ans;

  cin >> n;

  while (n != 0) {
    ans = (ans * 10) + n % 10;
    n /= 10;
  }

  cout << ans << endl;

  return 0;
}
