#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long x, y;
  char op;

  cin >> x;
  cin >> op;
  cin >> y;

  switch (op) {
  case '+':
    cout << x + y << endl;
    break;

  case '-':
    cout << x - y << endl;
    break;
  case '*':
    cout << x * y << endl;
    break;
  case '/':
    cout << x / y << endl;
    break;
  case '%':
    cout << x % y << endl;
    break;
  default:
    cout << "No suitable operation can be performed" << endl;
    break;
  }

  return 0;
}
