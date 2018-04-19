#include <cstdio>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
  int n, x, y, z, d, x1, y1, z1, x2, y2, z2;

  while (true) {
    scanf("%d", &n);

    if (n == 0) break;

    x1 = y1 = z1 = 0;
    x2 = y2 = z2 = INT_MAX;
    ++n;

    while (--n) {
      scanf("%d %d %d %d", &x, &y, &z, &d);

      x1 = max(x1, x);
      y1 = max(y1, y);
      z1 = max(z1, z);

      x2 = min(x2, x + d);
      y2 = min(y2, y + d);
      z2 = min(z2, z + d);
    }

    if ((x1 >= x2) || (y1 >= y2) || (z1 >= z2)) printf("0\n");
    else {
      int r = abs(x2 - x1) * abs(y2 - y1) * abs(z2 - z1);
      printf("%d\n", r);
    }
  }

  return 0;
}
