#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

int sieve_size;
bitset<10010> bs;
vector<int>   primos;

void sieve(int sup) {
  sieve_size = sup + 1;
  bs.set();
  bs[0] = bs[1] = 0;

  // primos.push_back(1);

  for (int i = 2; i <= sieve_size; i++)
    if (bs[i]) {
      for (int j = i * i; j <= sieve_size; j += i) bs[j] = 0;

      primos.push_back((int)i);
    }
}

int validaSoma(int N) {
  int temp, i = 0, j = 0, numSomas = 0;

  while (j <= (N / 2) + 1) {
    bs.reset();

    /*cout << "\nPrimos: ";

       for(int k = 0; k < primos.size(); ++k)
            cout << primos[k] << " ";*/

    for (i = j, temp = 0; temp < N && i < primos.size();
         temp += primos[i], bs[i] = 1, ++i) ;  // Equanto somatoria < numero e
                                               // elemento primo < metade
                                               // numero, soma sequencia

    /*cout << "\nBitset: ";

       for(int k = 0; k < 10; ++k)
            cout << bs[k] << " ";

       cout << "\nTemp: " << temp << "\nNum Somas: " << numSomas;

       cout << "\nI: " << i << "\tJ: " << j << "\n\n";*/

    if (temp == N) ++numSomas;
    else if (j >= N) return numSomas;

    ++j;
  }

  return numSomas;
}

int main() {
  int n, flag = 0;

  sieve(10001);

  while (cin >> n) {
    /*if(flag == 1 && n !=0)
        cout << endl;
       else
        flag = 1;*/
    if (n != 0) cout << validaSoma(n) << endl;

    /*cout << "Bitset: ";

       for(int i = 0; i < 5; ++i)
            cout << bs[i] << " ";

       cout << "\nPrimos: ";

       for(int i = 0; i < 5; ++i)
            cout << primos[i] << " ";
     */
  }
  return 0;
}
