#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, sum = 0;
  cin >> n;
  while (n != 0) {
    sum += n % 10;
    n /= 10;
  }
  cout << sum << endl;

  return 0;
}
