#include <iostream>
#include <gmpxx.h>
using namespace std;
int main()
{
    mpz_class X;
    cin >> X;

    mpz_class result;
    mpz_sqrt(result.get_mpz_t(), X.get_mpz_t());

    cout << result << endl;

    return 0;
}
