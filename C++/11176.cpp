#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <math.h>

using namespace std;
double dp[505][505];

int main() {
  int n, i, j, k;
  double p;

  while (scanf("%d %lf", &n, &p) == 2 && n) {
    memset(dp, 0, sizeof(dp));

    for (i = 0; i <= n; i++) dp[0][i] = 1;

    for (i = 1; i <= n; i++) {
      for (j = 0; j <= n; j++) {
        dp[i][j] = dp[i - 1][j];

        if (j == i - 1) dp[i][j] -= pow(p, j + 1);
        else if (i - (j + 1) - 1 >=
                 0) dp[i][j] -= dp[i - (j + 1) - 1][j] * (1 - p) * pow(p, j + 1);
      }

      dp[i][i] = 1;
    }

    double ret = 0;

    for (i = 1; i <= n; i++) ret += i * (dp[n][i] - dp[n][i - 1]);

    printf("%lf\n", ret);
  }

  return 0;
}
