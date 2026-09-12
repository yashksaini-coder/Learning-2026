#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int score;
  cin >> score;

  if (score > 90)
    cout << "Excellent" << endl;
  else if (80 < score && score <= 90)
    cout << "Good" << endl;
  else if (70 < score && score <= 80)
    cout << "Fair" << endl;
  else if (60 < score && score <= 70)
    cout << "Expectation" << endl;
  else
    cout << "Below Par" << endl;
  return 0;
}
