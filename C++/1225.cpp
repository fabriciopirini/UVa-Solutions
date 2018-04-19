#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
  int   n, sets, v[10] = { 0 };
  char *str = { 0 }, input[1];

  cin >> sets;

  for (int i = 0; i < sets; ++i) {
    cin >> n;

    for (int j = 1; j < n; ++j) strcat(str, itoa(j, input, 10));

    for (unsigned k = 0; str[k] != '\0'; ++k) {
      v[str[k] - '0']++;
    }

    for (int z = 0; z < 10; ++z) cout << v[z] << " ";
    cout << endl;
  }

  return 0;
}
