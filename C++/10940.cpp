#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, p;

  while (cin >> n && n) {
    if (n <= 2) cout << n << endl;
    else {
      p = pow(2, (int)(log(n) / log(2.0)));

      if (p == n) cout << n << endl;
      else cout << 2 * (n - p) << endl;
    }
  }

  return 0;
}
