#include <cstdio>
#include <cmath>

using namespace std;

int gcd(int x, int y) {
  int r;

  while (y != 0) {
    r = x % y;
    x = y;
    y = r;
  }

  return x;
}

int main() {
  int atual, prox, temp;

  while (scanf("%d", &atual)) {
    if (atual == 0) break;
    scanf("%d", &prox);
    temp = abs(prox - atual);

    while (scanf("%d", &prox)) {
      if (prox == 0) break;
      temp = gcd(temp, abs(prox - atual));
    }

    printf("%d\n", temp);
  }

  return 0;
}
