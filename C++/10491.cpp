#include <cstdio>

using namespace std;

int main() {
  double ncows, ncars, nshow, prob;

  while (scanf("%lf%lf%lf", &ncows, &ncars, &nshow) == 3) {
    prob =
      (1.0 * (ncows * ncars + ncars * (ncars - 1)) /
       (ncows + ncars - nshow - 1)) /
      (ncows + ncars);
    printf("%.5lf\n", prob);
  }
}
