#include <cstdio>
#include <math.h>

int main() {
  double a, b, c, s, r, rose, violets, sunflowers, R, triangle;

  while (scanf("%lf%lf%lf", &a, &b, &c) == 3) {
    s          = (a + b + c) / 2;
    triangle   = sqrt(s * (s - a) * (s - b) * (s - c));
    r          = triangle / s;
    rose       = M_PI * (r * r);
    violets    = triangle - rose;
    R          = (a * b * c) / (4 * triangle);
    sunflowers = (M_PI * R * R) - triangle;

    printf("%.4lf %.4lf %.4lf\n", sunflowers, violets, rose);
  }

  return 0;
}
