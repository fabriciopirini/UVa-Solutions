#include <iostream>

using namespace std;

void findRational(int index, int& cont, int& den, int& num) {
  int diag;

  den = 0,  num = 1, cont = index;

  for (diag = 1; diag < index; ++diag) index -= diag;

  if (diag % 2 == 0) den = index;

  else den = diag - index + 1;

  num = diag - den + 1;

  cout << "TERM " << cont << " IS " << den << "/" << num << endl;
}

int main() {
  int index = 0, cont, den, num;

  while (cin >> index) findRational(index, cont, den, num);

  return 0;
}
