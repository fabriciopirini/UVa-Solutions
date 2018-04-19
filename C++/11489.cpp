#include <stdio.h>
#include <string>

using namespace std;

int main() {
  int  cases = 1, mod, n3, n;
  char input[1100];
  bool flag;

  scanf("%d", &n);

  while (n-- && scanf("%s", &input) == 1) {
    printf("Case %d: ", cases++);
    mod = n3 = 0;

    for (int i = 0; input[i] != '\0'; ++i) {
      mod = (mod + (input[i] - '0') % 3) % 3;

      if ((input[i] - '0') % 3 == 0) ++n3;
    }

    flag = false;

    if (mod != 0) {
      for (int i = 0; input[i] != '\0'; ++i) {
        if ((input[i] - '0') % 3 == mod) {
          ++n3;
          flag = true;
          break;
        }
      }
    }
    else flag = true;

    if (flag && (n3 % 2)) printf("S\n");
    else printf("T\n");
  }

  return 0;
}
