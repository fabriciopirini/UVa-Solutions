#include <iostream>
#include <cmath>

using namespace std;

long long H(int n) {
  long long res = 0;
  int sqr       = int(sqrt(n)) + 1;

  for (int i = 1; i < sqr; ++i) res += n / i;

  --sqr;
  res = 2 * res - sqr * sqr;
  return res;
}

int main() {
  int T, n;

  cin >> T;

  while (T > 0) {
    cin >> n;
    cout << H(n) << endl;
    --T;
  }

  return 0;
}
