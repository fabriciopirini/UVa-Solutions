#include <cstdio>
#include <math.h>

int main() {
  int t;
  double D, L, temp;

  scanf("%d", &t);

  while (t) {
    scanf("%lf %lf", &D, &L);
    D   /= 2, L /= 2;
    temp = sqrt(L * L - D * D);
    printf("%.3lf\n", 2 * acos(0) * L * temp);
    --t;
  }
  return 0;
}
